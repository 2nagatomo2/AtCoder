#include <iostream>
#include <vector>
using namespace std;

int N, M;
int a, b, c;
vector<int> G[11];
bool visited[11];
int ans;

void dfs(int pos, int sum) {
    visited[pos] = true;
    ans = max(ans, sum);
    for (int i = 1; i < N; i++) {
        if (visited[i] == false && G[pos][i]) {
            int nex = i;
            dfs(i, sum + G[pos][i]);
        }
    }
    return;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> a >> b >> c;
        G[a][b] = c;
        G[b][a] = c;
    }
    for (int i = 1; i < N; i++) {
        dfs(i, 0);
    }

    cout << ans << endl;
    return 0;
}