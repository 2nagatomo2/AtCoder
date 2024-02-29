#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    int grid[3][3];
    ll ans = 0;
    for(int i=1; i<=w1-2; i++) {
        grid[0][0] = i;
        for(int j=1; j<=w1-i-1; j++) {
            grid[0][1] = j;
            grid[0][2] = w1 - i - j;
            for(int k=1; k<=w2-2; k++) {
                grid[1][0] = k;
                for(int l=1; l<=w2-k-1; l++) {
                    grid[1][1] = l;
                    grid[1][2] = w2 - k - l;
                    for(int m=1; m<=w3-2; m++) {
                        grid[2][0] = m;
                        for(int n=1; n<=w3-m-1; n++) {
                            grid[2][1] = n;
                            grid[2][2] = w3 - n - m;
                            if(grid[0][0] + grid[1][0] + grid[2][0] == h1 && grid[0][1] + grid[1][1] + grid[2][1] == h2 && grid[0][2] + grid[1][2] + grid[2][2] == h3) {
                                ans++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}