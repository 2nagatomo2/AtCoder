#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> st;
    vector<int> b(n);
    int a;
    rep(i, n) {
        cin >> a;
        st.insert(a);
    }
    rep(i, m) cin >> b[i];
    bool f = false;
    rep(i, m) {
        f = false;
        for(auto itr = st.begin(); itr != st.end(); itr++) {
            if(*itr == b[i]) {
                f = true;
                st.erase(itr);
                break;
            }
        }
        if(!f) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}