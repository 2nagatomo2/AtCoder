#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

const ll INF = (1LL << 60);

// 辺の情報
struct Edge
{
    // 行先
    int to;

    // コスト
    int cost;

    // 道路番号
    int road_num;
};

#define Graph vector<vector<Edge>>

// { distance, from }
#define pll pair<ll, ll>

// ダイクストラ法
// distances は頂点数と同じサイズ, 全要素 INF で初期化しておく
void Dijkstra(const Graph& graph, vector<ll>& distances, int startIndex, vector<int>& mati)
{
    // 「現時点での最短距離, 頂点」の順に取り出す priority_queue
    // デフォルトの priority_queue は降順に取り出すため greater を使う
    priority_queue<pll, vector<pll>, greater<pll>> q;
    q.emplace((distances[startIndex] = 0), startIndex);

    while (!q.empty())
    {
        const ll distance = q.top().first;
        const int from = q.top().second;
        q.pop();

        // 最短距離でなければ処理しない
        if (distances[from] < distance)
        {
            continue;
        }
        
        // 現在の頂点からの各辺について
        for (const auto& edge : graph[from])
        {
            // to までの新しい距離
            const ll d = (distances[from] + edge.cost);
            
            // d が現在の記録より小さければ更新
            if (d < distances[edge.to])
            {
                q.emplace((distances[edge.to] = d), edge.to);
                mati[edge.to] = edge.road_num;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[m], b[m], c[m];
    
    Graph graph(n);
    rep(i, m) {
        cin >> a[i] >> b[i] >> c[i];
        a[i]--;
        b[i]--;
        graph[a[i]].push_back({b[i], c[i], i});
        graph[b[i]].push_back({a[i], c[i], i});
    }

    vector<ll> distances(n, INF);
    vector<int> mati(n, 0);
    vector<bool> keep(m, false);
    Dijkstra(graph, distances, 0, mati);
    REP(i, 1, n) {
        keep[mati[i]] = true;
    }
    rep(i, m) {
        if(keep[i]) cout << i+1 << ' ';
    }
    cout << endl;
    return 0;
}