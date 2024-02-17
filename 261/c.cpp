#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string s[n];
    rep(i, n) cin >> s[i];
    map<string, int> mp;
    rep(i, n) {
        if(!mp[s[i]]) {
            cout << s[i] << endl;
            mp[s[i]] = 1;
        } else {
            cout << s[i] << '(' << mp[s[i]] << ')' << endl;
            mp[s[i]]++;
        }
    }
    return 0;
}