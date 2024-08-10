#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,b,n) for(int i=b; i<n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

const ll INF = (1LL << 60);

// 辺の情報
struct Edge
{
    // 行先
    int to;

    // コスト
    int cost;
};

#define Graph vector<vector<Edge>>

// { distance, from }
#define pll pair<ll, ll>

// ダイクストラ法
// distances は頂点数と同じサイズ, 全要素 INF で初期化しておく
void Dijkstra(const Graph& graph, vector<ll>& distances, int startIndex, vector<ll>& a) {
    // 「現時点での最短距離, 頂点」の順に取り出す priority_queue
    // デフォルトの priority_queue は降順に取り出すため greater を使う
    priority_queue<pll, vector<pll>, greater<pll>> q;
    q.emplace((distances[startIndex] = 0), startIndex);

    while (!q.empty()) {
        const ll distance = q.top().first;
        const int from = q.top().second;
        q.pop();

        // 最短距離でなければ処理しない
        if (distances[from] < distance) {
            continue;
        }

        // 現在の頂点からの各辺について
        for (const auto& edge : graph[from]) {
            // to までの新しい距離
            const ll d = (distances[from] + edge.cost + a[edge.to]);

            // d が現在の記録より小さければ更新
            if (d < distances[edge.to]) {
                q.emplace((distances[edge.to] = d), edge.to);
            }
        }
    }
}

int main() {
    int n, m, u, v, b;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    Graph graph(n);
    vector<ll> distance(n, INF);
    rep(i, m) {
        cin >> u >> v >> b;
        u--; v--;
        graph[u].push_back({v, b});
        graph[v].push_back({u, b});
    }

    Dijkstra(graph, distance, 0, a);
    rep(i, n-1) cout << distance[i+1] + a[0] << ' ';
    cout << endl;
    return 0;
}