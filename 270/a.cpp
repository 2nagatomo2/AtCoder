#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int a, b;
    bool f1 = false, f2 = false, f4 = false;
    cin >> a >> b;
    int ans = 0;
    if(a % 2 == 1) {
        f1 = true;
        a--;
    }
    if(a >= 4) {
        f4 = true;
        a -= 4;
    }
    if(a == 2) {
        f2 = true;
    }
    if(b % 2 == 1) {
        f1 = true;
        b--;
    }
    if(b >= 4) {
        f4 = true;
        b -= 4;
    }
    if(b == 2) {
        f2 = true;
    }
    if(f1) ans++;
    if(f2) ans += 2;
    if(f4) ans += 4;
    cout << ans << endl;
    return 0;
}