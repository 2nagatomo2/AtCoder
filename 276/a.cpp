#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    int ans = -1;
    rep(i, s.length()) {
        if(s[i] == 'a') ans = i + 1;
    }
    cout << ans << endl;
    return 0;
}