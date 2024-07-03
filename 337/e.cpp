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
    int n;
    cin >> n;
    int m = ceil(log2(n));
    cout << m << endl;
    vector<vector<int>> a(m);
    vector<int> cnt(m, 0);
    rep(i, n) {
        rep(j, m) {
            if((i >> j) & 1) {
                a[j].push_back(1);
                cnt[j]++;
            }
            else a[j].push_back(0);
        }
    }

    rep(i, m) {
        cout << cnt[i] << ' ';
        rep(j, n) {
            if(a[i][j] == 1) cout << j+1 << ' ';
        }
        cout << endl;
    }

    string s;
    cin >> s;
    vector<bool> check(n, true);
    rep(i, m) {
        if(s[i] == '1') {
            rep(j, n) {
                if(a[i][j] == 0) check[j] = false;
            }
        }
    }

    rep(i, n) {
        if(check[i]) {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}