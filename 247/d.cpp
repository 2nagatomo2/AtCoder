#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int q, query, x, c;
    cin >> q;
    queue<pair<ll, ll>> que;
    ll ans;
    while(q--) {
        cin >> query;
        switch (query) {
            case 1:
                cin >> x >> c;
                que.push({x, c});
                break;
            case 2:
                cin >> c;
                ans = 0;
                while(c > 0) {
                    ll tmp1 = que.front().first;
                    ll tmp2 = que.front().second;
                    if(c > tmp2) {
                        ans += tmp1 * tmp2;
                        que.pop();
                        c -= tmp2;
                    } else {
                        ans += tmp1 * c;
                        que.front().second -= c;
                        c = 0;
                    }
                }
                std::cout << ans << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}