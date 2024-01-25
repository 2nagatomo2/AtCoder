#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    if(s.length() < t.length()) {
        cout << "No" << endl;
        return 0;
    }
    else if(s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    rep(i, s.length() - t.length()+1) {
        if(s.substr(i, t.length()) == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}