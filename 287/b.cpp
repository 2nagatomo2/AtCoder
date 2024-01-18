#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int s[n];
    int t[m];
    int num;
    rep(i, n) {
      cin >> num;
      s[i] = num % 1000;
    }
    rep(i, m) cin >> t[i];

    int ans = 0;
    rep(i, n) rep(j, m) {
        if(s[i] == t[j]) {
            ans++;
            break;
        }
    }
    cout << ans << endl;    
    return 0;
}