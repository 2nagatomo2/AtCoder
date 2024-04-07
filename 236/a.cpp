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
    int a, b;
    cin >> a >> b;
    string ans = s.substr(0, a-1) + s[b-1] + s.substr(a, b - a - 1) + s[a-1] + s.substr(b, s.length() - b);
    cout << ans << endl;
    return 0;
}