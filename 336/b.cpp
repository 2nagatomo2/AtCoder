#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string m = "";
    while(n > 0) {
        m += to_string(n % 2);
        n /= 2;
    }
    int ans = 0;
    rep(i, m.length()) {
        if(m[i] == '0') ans++;
        else break;
    }
    cout << ans << endl;
    return 0;
}