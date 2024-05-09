#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    string s;
    cin >> s;
    set<string> st;
    rep(i, s.length()) {
        REP(j, 1, s.length()-i+1) {
            st.insert(s.substr(i, j));
        }
    }
    cout << st.size() << endl;
    return 0;
}