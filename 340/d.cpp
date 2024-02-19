#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

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
void Dijkstra(const Graph& graph, vector<ll>& distances, int startIndex)
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
			}
		}
	}
}

int main() {
    int n;
    cin >> n;
    int a[n-1], b[n-1], x[n-1];
    
    Graph graph(n);
    rep(i, n-1) {
        cin >> a[i] >> b[i] >> x[i];
        x[i]--;
        graph[i].push_back({i+1, a[i]});
        graph[i].push_back({x[i], b[i]});
    }

    vector<ll> distances(n, INF);
    Dijkstra(graph, distances, 0);
    cout << distances[n-1] << endl;
    return 0;
}