#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.length()) {
        if(i != s.length() - 1) {
            if(s.substr(i, 2) == "00") {
                ans++;
                i++;
            } else {
                ans++;
            }
        } else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}