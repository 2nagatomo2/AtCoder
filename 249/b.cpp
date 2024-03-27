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
    bool f1 = false, f2 = false, f3 = true;
    map<char, int> mp;

    rep(i, s.length()) {
        if(int(s[i]) >= int('A') && int(s[i]) <= int('Z')) f1 = true;
        else f2 = true;
        if(mp.count(s[i])) f3 = false;
        else mp[s[i]]++;
    }

    if(f1 && f2 && f3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}