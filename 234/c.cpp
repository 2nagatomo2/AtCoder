#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll k;
    cin >> k;
    stack<char> st;
    while (k > 0) {
        if(k % 2 == 0) {
            st.push('0');
        } else {
            st.push('2');
        }
        k /= 2;
    }
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}