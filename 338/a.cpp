#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    string s;
    cin >> s;
    string ans = s;
    rep(i, s.length()) {
        if(s[i] == '.') ans = s.substr(i+1, s.length() - i + 1);
    }
    cout << ans << endl;
    return 0;
}