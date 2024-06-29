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
    string x;
    cin >> x;
    rep(i, x.length()) {
        if(x[i] == '.') {
            cout << x.substr(0, i) << endl;
            return 0;
        }
    }
    cout << x << endl;
    return 0;
}