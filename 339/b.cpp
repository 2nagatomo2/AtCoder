#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    string S;
    cin >> S;
    vector<int> cnt(26, 0);
    rep(i, S.length()) {
        cnt[int(S[i]) - int('a')]++;
    }
    int m = 0;
    rep(i, 26) {
        m = max(m, cnt[i]);
    }
    rep(i, 26) {
        if(cnt[i] == m) {
            cout << char('a' + i) << endl;
            break;
        }
    }
    return 0;
}