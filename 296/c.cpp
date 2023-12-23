#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    ll x;
    cin >> n >> x;
    x = abs(x);
    ll a[n];
    rep(i, n) cin >> a[i];

    sort(a, a+n);
    
    ll l = 0, r = 0;
    for(int i=0; i<n; i++) {
        for(int j=l; j<=r; j++) {
            if (a[i] - a[j] == x) {
                cout << "Yes" << endl;
                exit(0);
            } else if(a[i] - a[j] < x) {
                l = j;
                r++;
                break;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}