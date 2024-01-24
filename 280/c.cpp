#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    rep(i, s.length()) {
        if(s[i] != t[i]) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << t.length() << endl;
    return 0;
}