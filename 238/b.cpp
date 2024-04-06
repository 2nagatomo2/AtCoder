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
    int a[n];
    rep(i, n) cin >> a[i];
    set<int> st;
    st.insert(0);
    int x = 0;
    rep(i, n) {
        x += a[i];
        x %= 360;
        st.insert(x);
    }
    int max_a = *st.begin();
    for(auto itr = st.rbegin(); itr != st.rend(); itr++) {
        auto next = itr;
        next++;
        chmax(max_a, *itr - *next);
    }
    chmax(max_a, 360 - *st.rbegin());
    cout << max_a << endl;
    return 0;
}