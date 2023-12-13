#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

const int inf = 1000000000;

int main() {
    int H, W;
    cin >> H >> W;
    ll A[H][W], B[H][W];
    rep(i, H) rep(j, W) cin >> A[i][j];
    rep(i, H) rep(j, W) cin >> B[i][j];

    int p[H], q[W];
    rep(i, H) p[i] = i;
    rep(i, W) q[i] = i;

    int ans = inf;
    do {   
        do {
            bool match = true;
            rep(i, H) rep(j, W) {
                if (A[p[i]][q[j]] != B[i][j]) match = false;
            }
            if (!match) continue;

            int pinv = 0, qinv = 0;
            rep(i, H) rep(j, H) if (i < j && p[i] > p[j]) pinv++;
            rep(i, W) rep(j, W) if (i < j && q[i] > q[j]) qinv++;
            
            ans = min(ans, pinv+qinv);

        } while (next_permutation(q, q+W));
    } while (next_permutation(p, p+H));
    
    if (ans == inf) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
 }