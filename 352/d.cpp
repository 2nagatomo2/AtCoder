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
    int p[n];
    map<int, int> mp;
    rep(i, n) {
        cin >> p[i];
        mp[p[i]] = i;
    }
    set<int> st;
    int ans = n+1;
    rep(i, n) {
        if(i < k-1) {
            st.insert(mp[i+1]);
        } else if(i == k-1) {
            st.insert(mp[i+1]);
            chmin(ans, *st.rbegin() - *st.begin());
        } else {
            st.insert(mp[i+1]);
            st.erase(mp[i-k+1]);
            chmin(ans, *st.rbegin() - *st.begin());
        }
    }
    cout << ans << endl;
    return 0;
}