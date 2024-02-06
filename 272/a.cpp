#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a, ans = 0;
    rep(i, n) {
        cin >> a;
        ans += a;
    }
    cout << ans << endl;
    return 0;
}