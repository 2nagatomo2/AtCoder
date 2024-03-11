#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], b[k];
    rep(i, n) cin >> a[i];
    rep(i, k) cin >> b[i];

    int max_a = 0;
    set<int> st; 
    rep(i, n) {
        if(max_a < a[i]) {
            max_a = a[i];
            st.clear();
            st.insert(i+1);
        } else if(max_a == a[i]) {
            st.insert(i+1);
        }
    }

    rep(i, k) {
        if(st.count(b[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}