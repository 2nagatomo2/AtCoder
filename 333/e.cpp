#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n, x, t;
    cin >> n;
    vector<stack<int>> st(n+1);
    vector<int> ans(n, -1);
    rep(i, n) {
        cin >> t >> x;
        if(t == 1) {
            st[x].push(i);
        } else {
            if(st[x].empty()) {
                cout << -1 << endl;
                return 0;
            } else {
                ans[st[x].top()] = 1;
                st[x].pop();
            }
        }
    }

    for(auto s : st) {
        while(!s.empty()) {
            ans[s.top()] = 0;
            s.pop();
        }
    }
    int k = 0, kmax = 0;
    rep(i, n) {
        if(ans[i] == 1) {
            k++;
            chmax(kmax, k);
        } else if(ans[i] == -1) {
            k = max(0, k-1);
        }
    }
    cout << kmax << endl;
    rep(i, n) {
        if(ans[i] != -1) cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}