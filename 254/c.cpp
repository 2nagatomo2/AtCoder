#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    rep(i, n) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    rep(i, n) {
        int l = lower_bound(b, b+n, a[i]) - b;
        int r = upper_bound(b, b+n, a[i]) - b - 1;
        cout << l << ' ' << r << endl;
        if(((l-i) % k) >= l && ((r-i) % k) < r) continue;
        else {
            cout << i << endl;
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}