#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    string s[n];
    rep(i, n) cin >> s[i];
    sort(s, s + k);
    rep(i, k) cout << s[i] << endl;
    return 0;
}