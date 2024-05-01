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
    int f = 0;
    rep(i, s.length()) {
        if(s[i] != t[i]) {
            if(f == 1) {
                cout << "No" << endl;
                return 0;
            } else {
                if(i == s.length()-1) {
                    cout << "No" << endl;
                    return 0;
                }
                if(s[i+1] == t[i]) {
                    swap(s[i], s[i+1]);
                    f++;
                } else {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}