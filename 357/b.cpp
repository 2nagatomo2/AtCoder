#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    string s;
    cin >> s;
    int l = 0, u = 0;
    rep(i, s.length()) {
        if(int(s[i]) <= int('Z')) u++;
        else l++;
    }

    if(l < u) {
        rep(i, s.length()) {
            if(int(s[i]) > int('Z')) s[i] = char(int('A') + int(s[i]) - int('a'));
        }
    } else {
        rep(i, s.length()) {
            if(int(s[i]) <= int('Z')) s[i] = char(int('a') + int(s[i]) - int('A'));
        }
    }
    cout << s << endl;
    return 0;
}