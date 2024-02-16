#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int y;
    cin >> y;
    int ans;
    if(y % 4 == 1) ans = y + 1;
    else if(y % 4 == 2) ans = y;
    else if(y % 4 == 3) ans = y + 3;
    else ans = y + 2;
    cout << ans << endl;
    return 0;
}