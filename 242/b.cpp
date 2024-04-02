#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    vector<char> S;
    string s;
    cin >> s;
    rep(i, s.length()) S.push_back(s[i]);
    sort(S.begin(), S.end());
    rep(i, S.size()) cout << S[i];
    cout << endl;
    return 0;
}