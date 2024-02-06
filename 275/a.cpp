#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int ans, h, heighest = 0;
    rep(i, n) {
        cin >> h;
        if(heighest < h) ans = i+1;
        heighest = max(heighest, h);
    }
    cout << ans << endl;
    return 0;
}