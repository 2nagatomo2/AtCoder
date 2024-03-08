#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int N;
    cin >> N;
    map<ll, int> mp;
    int s, c;
    rep(i, N) {
        cin >> s >> c;
        mp[s] = c;
    }

    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(itr->second >= 2) {
            mp[itr->first * 2] += itr->second / 2;
            itr->second %= 2;
        }
    }

    int ans = 0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        ans += itr->second;
    }
    cout << ans << endl;
    return 0;
}