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
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int idx = 0;
    rep(i, s.length()) {
        if(s[i] == t[idx]) {
            idx++;
        }
        if(idx == 3) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(idx == 2) {
        if(t[2] == 'X') cout << "Yes" << endl;
        else cout << "No" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}