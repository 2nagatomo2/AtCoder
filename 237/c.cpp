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
    int l = 0, r = s.length() - 1;
    rep(i, s.length()) {
        if(s[i] != 'a') {
            l = i;
            break;
        }
    }
    rep(i, s.length()) {
        if(s[s.length() - 1 - i] != 'a') {
            r = s.length() - 1 - i;
            if(l > i) {
                cout << "No" << endl;
                return 0;
            }
            break;
        }
    }
    
    string tmp = s.substr(l, r - l + 1);
    rep(i, tmp.length() / 2) {
        if(tmp[i] != tmp[tmp.length() - 1 - i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}