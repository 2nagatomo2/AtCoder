#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n], dev_by_2[n], dev_by_3[n];
    rep(i, n) {
        cin >> a[i];
        dev_by_2[i] = 0;
        dev_by_3[i] = 0;
    }

    int min2 = 100, min3 = 100, cnt = 0;
    rep(i, n) {
        cnt = 0;
        while(a[i] % 2 == 0) {
            a[i] /= 2;
            dev_by_2[i]++;
            cnt++;
        }
        min2 = min(min2, cnt);
        cnt = 0;
        while(a[i] % 3 == 0) {
            a[i] /= 3;
            dev_by_3[i]++;
            cnt++;
        }
        min3 = min(min3, cnt);
    }

    int ans = 0;
    rep(i, n-1) {
        if(a[i] != a[i+1]) {
            ans = -1;
            break;
        } else {
            ans += dev_by_2[i] - min2 + dev_by_3[i] - min3;
        }
    }
    
    if(ans == -1) cout << ans << endl;
    else {
        ans += dev_by_2[n-1] - min2 + dev_by_3[n-1] - min3;
        cout << ans << endl;
    }
    return 0;
}