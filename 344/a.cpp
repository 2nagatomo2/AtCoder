#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    string s;
    cin >> s;
    string ans = "";
    int f = 0;
    rep(i, s.length()) {
        if(f == 1 && s[i] == '|') {
            f++;
            continue;
        }
        if(s[i] == '|') f++;
        if(f == 1) continue;
        ans.push_back(s[i]);
    }
    cout << ans << endl;
    return 0;
}