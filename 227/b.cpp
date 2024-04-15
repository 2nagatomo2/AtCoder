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
    int s[n];
    rep(i, n) cin >> s[i];
    set<int> st;
    int a;
    REP(i, 1, 1000) {
        REP(j, 1, 1000) {
            a = 4 * i * j + 3 * i + 3 * j;
            if(a > 1000) break;
            st.insert(a);
        }
    }

    int ans = 0;
    rep(i, n) {
        if(!st.count(s[i])) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}