#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k;
    cin >> n >> k;
    string s[n];
    rep(i, n) cin >> s[i];
    vector<vector<bool>> ch(n, vector<bool>(26, false));
    rep(i, n) rep(j, s[i].length()) ch[i][int(s[i][j] - int('a'))] = true;
    map<int, int> mp;
    int ans = 0, cnt = 0;
    rep(i, 1 << n) {
        mp.clear();
        cnt = 0;
        int tmp = i;
        rep(j, n) {
            if(tmp % 2 == 1) {
                rep(l, 26) {
                    if(ch[j][l]) mp[l]++;
                }
            }
            tmp /= 2;
        }
        for(auto itr = mp.begin(); itr != mp.end(); itr++) if(itr->second == k) cnt++;
        chmax(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}