#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a+n);
    int ans = 0, cnt = 0, socks = a[0];
    rep(i, n) {
        if(socks == a[i]) {
            cnt++;
            if(cnt % 2 == 0) {
                ans++;
            }
        } else {
            cnt = 1;
            socks = a[i];
        }
    }
    
    cout << ans << endl;
    return 0;
}