#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N, x;
    cin >> N;
    set<int> st;
    for(int i = 1; i <= 2 * N + 1; i++) st.insert(i);
    while(!st.empty()) {
        cout << *st.begin() << endl;
        st.erase(*st.begin());
        cin >> x;
        st.erase(x);
    }
    return 0;
}