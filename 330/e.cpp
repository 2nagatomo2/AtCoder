#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n, q, i, x;
    cin >> n >> q;
    vector<int> a(n);
    set<int> st; // Mex を管理する集合．配列に存在しない非負整数を集合として持つ
    map<int, int> mp; // 配列に存在するMexの最大値以下の数字をkey，その個数をvalueとして持つ連想配列
    rep(i, n+1) st.insert(i);
    rep(i, n) {
        cin >> a[i];
        if(st.count(a[i])) st.erase(a[i]);
        if(a[i] <= n) mp[a[i]]++;
    }

    while(q--) {
        cin >> i >> x;
        i--;
        if(a[i] <= n) {
            mp[a[i]]--;
            if(mp[a[i]] == 0) st.insert(a[i]);
        }
        if(x <= n) {
            mp[x]++;
            if(mp[x] == 1) st.erase(x);
        }
        a[i] = x;
        cout << *st.begin() << endl;
    }
    return 0;
}