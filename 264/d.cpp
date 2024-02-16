#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,s,n) for(int i=s; i<(n); i++)

int main() {
    string S;
    cin >> S;
    map<char, int> mp;
    mp['a'] = 0;
    mp['t'] = 1;
    mp['c'] = 2;
    mp['o'] = 3;
    mp['d'] = 4;
    mp['e'] = 5;
    mp['r'] = 6;
    int num[7], ans = 0;
    rep(i, 7) num[i] = mp[S[i]];
    rep(i, 7) {
        REP(j, i, 7) {
            if(num[i] > num[j]) {
                int tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}