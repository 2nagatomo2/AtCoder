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
    string s, t;
    cin >> s >> t;
    for(int w = 1; w <= s.length() - 1; w++) {
        rep(c, w) {
            string tmp = "";
            int idx = c;
            while(idx < s.length()) {
                tmp += s[idx];
                idx += w;
            }
            if(tmp == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}