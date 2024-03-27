#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int H, W, R, C;
    cin >> H >> W >> R >> C;
    int ans = 4;
    if(R == 1) ans--;
    if(R == H) ans--;
    if(C == 1) ans--;
    if(C == W) ans--;
    cout << ans << endl;
    return 0;
}