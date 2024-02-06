#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) {
        cin >> a[i];
    }
    sort(a, a+n);
    reverse(a, a+n);
    int cnt = 0;
    for(int r = 0; r < n; r++) {
        int l = r;
        while(a[l] == a[r]) r++;
        cout << r - l << endl;
        r--;
        cnt++;
    }

    rep(i, n - cnt) cout << 0 << endl;
    return 0;
}