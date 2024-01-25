#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    string s, ans = "";
    cin >> n >> s;
    int state = 0;
    rep(i, n) {
        if(s[i] == '"') {
            ans += s[i];
            if(state == 0) state = 1;
            else state = 0;
        } else if(s[i] == ',') {
            if(state == 0) ans += ".";
            else ans += ",";
        } else {
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}