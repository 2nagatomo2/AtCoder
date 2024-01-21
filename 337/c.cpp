#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int num, a[n], ans[n];
    rep(i, n) {
        cin >> num;
        if(num == -1) {
            ans[0] = i + 1;
        } else {
            a[num-1] = i + 1;
        }
    }

    rep(i, n-1) {
        ans[i+1] = a[ans[i]-1];
    }
    rep(i, n) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}