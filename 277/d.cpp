#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    ll b[n], sum1 = 0;
    rep(i, n) {
        cin >> a[i];
        sum1 += a[i];
    }
    sort(a, a+n);
    b[0] = a[0];
    ll sum2 = 0;

    ll tmp = 0;
    if(a[0] == 0) {
        rep(i, n-1) {
            if(a[i+1] - a[i] <= 1) {
                tmp += a[i+1];
            } else {
                break;
            }
        }
    }

    rep(i, n-1) {
        if(a[i+1] - a[i] <= 1) {
            b[i+1] = a[i+1] + b[i];
        } else {
            sum2 = max(sum2, b[i]);
            b[i+1] = a[i+1];
        }
    }
    
    if(a[n-1] == m-1 && b[n-1] + tmp <= sum1) {
        sum2 = max(sum2, b[n-1] + tmp);
    } else {
        sum2 = max(sum2, b[n-1]);
    }
 
    cout << sum1 - sum2 << endl;
    return 0;
}