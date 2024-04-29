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
    map<char, int> mp;
    vector<int> v(100, 0);
    rep(i, s.length()) mp[s[i]]++;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        v[itr->second-1]++;
    }
    rep(i, 100) {
        if(v[i] != 0 && v[i] != 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}