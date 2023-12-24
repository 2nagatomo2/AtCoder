#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

const int INF = 10000000;

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    n1--; n2--;

    vector<vector<int> > G1(n1+1), G2(n2+1);
    queue<int> que;
    int dist1[n1+1], dist2[n2+1];
    rep(i, n1+1) dist1[i] = INF;
    rep(i, n2+1) dist2[i] = INF;

    int a, b;
    rep(i, m) {
        cin >> a >> b;
        a--;
        b--;
        if (a <= n1) {
            G1[a].push_back(b);
            G1[b].push_back(a);
        } else {
            a = a - n1 - 1;
            b = b - n1 - 1;
            G2[a].push_back(b);
            G2[b].push_back(a);
        }
    }

    vector<bool> visited_n1(n1+1);
    vector<bool> visited_n2(n2+1);
    que.push(0);
    visited_n1[0] = true;
    dist1[0] = 0;
    int ans1 = 0;
    while (!que.empty()) {
        int pos = que.front();
        que.pop();
        for(int v : G1[pos]) {
            if (!visited_n1[v]) {
                que.push(v);
                visited_n1[v] = true;
                dist1[v] = dist1[pos] + 1;
                ans1 = max(ans1, dist1[v]);
            }
        }
    }

    que.push(n2);
    visited_n2[n2] = true;
    dist2[n2] = 0;
    int ans2 = 0;
    while (!que.empty()) {
        int pos = que.front();
        que.pop();
        for(auto v : G2[pos]) {
            if (!visited_n2[v]) {
                que.push(v);
                visited_n2[v] = true;
                dist2[v] = dist2[pos] + 1;
                ans2 = max(ans2, dist2[v]);
            }
        }
    }
    
    int ans = ans1 + ans2 + 1;
    cout << ans << endl;
    return 0;
}