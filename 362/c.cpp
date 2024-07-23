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

int main() {
    int n;
    cin >> n;
    vector<pii> p(n);
    ll l_sum = 0, r_sum = 0;
    rep(i, n) {
        cin >> p[i].fi >> p[i].se;
        l_sum += p[i].fi;
        r_sum += p[i].se;
    }

    if(l_sum > 0 || r_sum < 0) {
        cout << "No" << endl;
        return 0;
    }

    vector<int> ans(n);
    ll sum = 0;
    rep(i, n-1) {
        l_sum -= p[i].fi;
        r_sum -= p[i].se;
        int l = p[i].fi, r = p[i].se;
        while(r - l > 1) {
            int mid = (l + r) / 2;
            if(l_sum + mid > 0) r = mid;
            else if(r_sum + mid < 0) l = mid;
            else {
                l = mid;
                break;
            }
        }
        if(l_sum + l > 0 || r_sum + l < 0) l++;
        ans[i] = l;
        l_sum += l;
        r_sum += l;
        sum += l;
    }
    ans[n-1] = -sum;

    cout << "Yes" << endl;
    rep(i, n) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}