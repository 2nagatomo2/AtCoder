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
    int q, query, k, x;
    cin >> q;
    while(q--) {
        cin >> query;
        switch (query)
        {
        case 1:
            cin >> k >> x;
            k--;
            a[k] = x;
            break;
        case 2:
            cin >> k;
            k--;
            cout << a[k] << endl;
        default:
            break;
        }
    }
    return 0;
}