#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string s[n];
    rep(i, n) cin >> s[i];
    for(int i=n-1; i>=0; i--) {
        cout << s[i] << endl;
    }
    return 0;
}