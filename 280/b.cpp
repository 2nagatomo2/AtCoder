#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int s[n], a[n];
    rep(i, n) cin >> s[i];
    a[0] = s[0];
    rep(i, n-1) {
        a[i+1] = s[i+1] - s[i];
    }

    rep(i, n) cout << a[i] << ' ';
    cout << endl;
    return 0;
}