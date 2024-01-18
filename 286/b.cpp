#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    string s, ans = "";    
    cin >> n >> s;
    rep(i, n-1) {
        if(s.substr(i, 2) == "na") {
            ans += "ny";
        } else {
            ans += s[i];
        }
    }
    ans += s[n-1];
    cout << ans << endl;
    return 0;
}