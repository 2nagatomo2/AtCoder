#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    rep(i, s.length()) {
        if(!mp.count(s[i])) {
            mp[s[i]] = 1;
        } else {
            mp[s[i]]++;
        }
    }
    rep(i, s.length()) {
        if(mp[s[i]] == 1) {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}