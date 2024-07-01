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

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<ll, vector<ll>, greater<ll>> a, b;
    ll x;
    rep(i, n) {
        cin >> x;
        a.push(x);
    }
    rep(i, m) {
        cin >> x;
        b.push(x);
    }
    
    ll ans = 0;
    bool flag = true;
    rep(i, m) {
        ll nb = b.top();
        b.pop();
        bool flag2 = false;
        
        while(!a.empty()) {
            ll na = a.top();
            a.pop();
            if(na >= nb) {
                ans += na;
                flag2 = true;
                break;
            }
        }
        if(!flag2) {
            flag = false;
            break;
        }
    }

    if(flag) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}