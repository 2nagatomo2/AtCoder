#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int ans;
    if(l1 > r2 || l2 > r1) ans = 0;
    else {
        ans = min(r1, r2) - max(l1, l2);
    }
    cout << ans << endl;
    return 0;
}