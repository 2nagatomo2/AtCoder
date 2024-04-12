#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    string s, t;
    cin >> s >> t;
    rep(i, s.length()-1) {
        if((int(t[i]) - int(s[i]) + 26) % 26 != (int(t[i+1]) - int(s[i+1]) + 26) % 26) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}