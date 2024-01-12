#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) cin >> a[i];
    sort(a, a+n);
    
    int ans = 0;
    rep(i, n) {
        if(a[i] == ans) {
            ans++;
            if(ans >= k) {
                cout << k << endl;
                return 0;
            }
        } 
        else if(a[i] < ans) continue;
        else break;
    }
    cout << ans << endl;
    return 0;
}