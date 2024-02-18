#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n][n];
    ll in;
    queue<pair<int, int> > que;
    rep(i, n) {
        cin >> in;
        rep(j, n) {
            a[i][n-j-1] = in % 10;
            in /= 10;
        }
    }

    int num = 0;
    rep(i, n) rep(j, n) {
        if(num == a[i][j]) {
            que.push(make_pair(i, j));
        } else if(num < a[i][j]) {
            num = a[i][j];
            while(!que.empty()) que.pop();
            que.push(make_pair(i, j));
        }
    }
    int dist[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

    ll ans = 0, tmp = num;
    while(!que.empty()) {
        int x = que.front().first, y = que.front().second;
        que.pop();
        for(auto d : dist) {
            tmp = num;
            rep(i, n-1) {
                tmp = 10 * tmp + a[(x+d[0]*(i+1)+n)%n][(y+d[1]*(i+1)+n)%n];
            }
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
    return 0;
}