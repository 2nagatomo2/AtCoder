#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int ans;
    if(x > 0) {
        if(y < 0 || y > x) ans = x;
        else if(z > y) ans = -1;
        else if(z > 0) ans = x;
        else ans = -2 * z + x;
    } else {
        if(y > 0 || y < x) ans = -x;
        else if(z < y) ans = -1;
        else if(z < 0) ans = -x;
        else ans = 2 * z - x;
    }
    cout << ans << endl;
    return 0;
}