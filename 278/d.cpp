#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q, query, i, x;
    pair<int, int> now = make_pair(-1, 0);
    cin >> n;
    ll a[n], ans = 0;
    rep(j, n) {
        cin >> a[j];
    }

    cin >> q;
    vector<vector<pair<int, int> > > vec(n);
    rep(j, q) {
        cin >> query;
        switch (query)
        {
        case 1:
            cin >> x;
            now = make_pair(j, x);
            break;
        case 2:
            cin >> i >> x;
            i--;
            vec[i].push_back(make_pair(j, x));
            break;
        case 3:
            cin >> i;
            i--;
            if(now.first == -1) {
                ans = a[i];
                for(auto v : vec[i]) {
                    ans += v.second;
                }
            }
            else {
                ans = now.second;
                for(auto v : vec[i]) {
                    if(v.first > now.first) ans += v.second;
                }
            }
            cout << ans << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}