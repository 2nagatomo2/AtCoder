#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    string s[n];
    rep(i, n) cin >> s[i];
    int ans[10];
    int used[10];
    rep(i, 10) ans[i] = 0;
    rep(i, 10) {
        rep(j, 10) {
            used[j] = 0;
        }
        rep(k, n) {
            chmax(ans[int(s[k][i]) - int('0')], used[int(s[k][i]) - int('0')] * 10 + i);
            used[int(s[k][i]) - int('0')]++;
        }
    }
    int min_ans = 1e9;
    rep(i, 10) {
        chmin(min_ans, ans[i]);
    }
    cout << min_ans << endl;
    return 0;
}