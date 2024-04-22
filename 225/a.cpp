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
    set<char> st;
    for(char c : s) st.insert(c);
    if(st.size() == 1) cout << 1 << endl;
    else if(st.size() == 2) cout << 3 << endl;
    else cout << 6 << endl;
    return 0;
}