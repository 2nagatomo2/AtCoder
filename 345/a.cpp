#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    string s;
    cin >> s;
    rep(i, s.length()) {
        if(i == 0) {
            if(s[i] != '<') {
                cout << "No" << endl;
                return 0;
            }
        } else if(i == s.length()-1) {
            if(s[i] != '>') {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if(s[i] != '=') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}