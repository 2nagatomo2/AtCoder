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
    int p_l[n], p_r[n];
    rep(i, n) {
        p_l[i] = 0;
        p_r[i] = 0;
    }

    if(a[0] == 0) p_l[0] = 0;
    else p_l[0] = 1;
    if(a[n-1] == 0) p_r[n-1] = 0;
    else p_r[n-1] = 1;
    rep(i, n-1) {
        if(a[i+1] < i+2) p_l[i+1] = min(p_l[i]+1, a[i+1]);
        else p_l[i+1] = min(i+2, p_l[i]+1);

        if(a[n-i-2] < i+2) p_r[n-i-2] = min(p_r[n-i-1]+1, a[n-i-2]);
        else p_r[n-i-2] = min(i+2, p_r[n-i-1]+1);
    }
    int ans = 0;
    rep(i, n) {
        ans = max(ans, min(p_l[i], p_r[i]));
    }
    cout << ans << endl;
    return 0;
}