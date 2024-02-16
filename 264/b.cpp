#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int R, C;
    cin >> R >> C;
    char grid[15][15];
    rep(i, 8) {
        rep(j, 8) {
            if(i % 2 == 0) {
                if(j % 2 == 1 && (j < i || j > 14 - i)) {
                    grid[i][j] = 'W';
                    grid[14-i][14-j] = 'W';
                    grid[i][14-j] = 'W';
                    grid[14-i][j] = 'W';
                }
                else {
                    grid[i][j] = 'B';
                    grid[14-i][14-j] = 'B';
                    grid[i][14-j] = 'B';
                    grid[14-i][j] = 'B';
                }
            }
            else {
                if(j % 2 == 0 && (j < i || j > 14 - i)) {
                    grid[i][j] = 'B';
                    grid[14-i][14-j] = 'B';
                    grid[i][14-j] = 'B';
                    grid[14-i][j] = 'B';
                }
                else {
                    grid[i][j] = 'W';
                    grid[14-i][14-j] = 'W';
                    grid[i][14-j] = 'W';
                    grid[14-i][j] = 'W';
                }
            }
        }
    }
    // rep(i, 15) {
    //     rep(j, 15) cout << grid[i][j] << ' ';
    //     cout << endl;
    // }
    if(grid[R-1][C-1] == 'B') cout << "black" << endl;
    else cout << "white" << endl;
    return 0;
}