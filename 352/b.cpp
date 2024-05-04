#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    string s, t;
    cin >> s >> t;
    int idx = 0;
    rep(i, t.length()) {
        if(t[i] == s[idx]) {
            cout << i+1 << endl;
            idx++;
        }
    }
    return 0;
}