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
    int k;
    cin >> s >> k;
    set<string> st;
    vector<int> v;
    rep(i, s.length()) v.push_back(i);
    do {
        vector<char> tmp;
        rep(i, s.length()) tmp.push_back(s[v[i]]);
        string t;
        rep(i, s.length()) t += tmp[i];
        st.insert(t);
    } while (next_permutation(v.begin(), v.end()));
    auto itr = st.begin();
    rep(i, k-1) itr++;
    cout << *itr << endl;
    return 0;
}