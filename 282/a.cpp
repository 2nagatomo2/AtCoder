#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int k;
    cin >> k;
    string ans = "";
    rep(i, k) {
        ans += char(int('A') + i);
    }
    cout << ans << endl;
    return 0;
}