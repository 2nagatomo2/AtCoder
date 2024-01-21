#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int t;
    cin >> t;
    ll n;
    ll p = 0, q = 0;
    rep(i, t) {
        cin >> n;
        for(ll j = 2; j * j * j <= n; j++) {
            if(n % j == 0) {
                if(n % (j*j) == 0) {
                    p = j;
                    q = n / (j * j);
                } else {
                    p = sqrt(n / j);
                    q = j;
                }
                break;
            }
        }
        cout << p << ' ' << q << endl;
    }   
    return 0;
}