#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int x;
    set<int> st;
    rep(i, 5) {
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << endl;
    return 0;
}