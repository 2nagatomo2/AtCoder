#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll k, a, n, x;
    ll ans = 1;
    cin >> k;
    
    for(ll p = 2; p*p <= k; p++) {
        if(k % p == 0) {
            a = 0;
            while(k % p == 0) {
                k /= p;
                a++;
            }
            n = 0;
            while(a > 0) {
                n += p;
                x = n;
                while(x % p == 0) {
                    a--;
                    x /= p;
                }
            }
            ans = max(ans, n);
        }
    }
    ans = max(ans, k);
    cout << ans << endl;
    return 0;
}