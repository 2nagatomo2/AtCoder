#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    ll x[n], y[n], z[n];
    ll t = 0, a = 0;
    vector<pair<ll,ll> > v;
    rep(i, n) {
        cin >> x[i] >> y[i] >> z[i];
        if(x[i] > y[i]) {
            t += z[i];
        } else {
            a += z[i];
            v.push_back(make_pair((y[i] - x[i] + 1) / 2, -z[i]));
        }
    }

    sort(v.begin(), v.end());
    rep(i, v.size()) cout << v[i].first << ' ' << v[i].second << endl;
    ll ans = 10000000000;
    if(t > a) ans = 0;
    else {
        ll person, giseki;
        rep(i, v.size()) {
            person = 0;
            giseki = 0;
            for(int j=i; j<v.size(); j++) {
                person += v[j].first;
                giseki -= v[j].second;
                if(t + giseki > a - giseki) {
                    ans = min(ans, person);
                    break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}