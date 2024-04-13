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
    if(s.length() == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    if(s[0] == 'o') {
        rep(i, s.length()) {
            if(i % 3 == 0) {
                if(s[i] != 'o') {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                if(s[i] != 'x') {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    } else if(s[1] == 'o') {
        rep(i, s.length()) {
            if(i % 3 == 1) {
                if(s[i] != 'o') {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                if(s[i] != 'x') {
                    cout << "No" << endl;
                    return 0;
                }
            } 
        }
    } else {
        rep(i, s.length()) {
            if(i % 3 == 2) {
                if(s[i] != 'o') {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                if(s[i] != 'x') {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}