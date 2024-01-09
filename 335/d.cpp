#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string grid[n+1][n+1];
    grid[(n+1)/2][(n+1)/2] = "T";
    int l = 1, r = n, u = n, d = 1;
    int x = 1, y = 1;
    for(int i=1; i<=n*n-1; i++) {
        grid[x][y] = to_string(i);
        if(y == d) {
            if(x == r) {
                y++;
                if(r - l == u - d) d++;
            } else {
                if(x == l && d != l) l++;
                x++;
            }
        } else if(y == u) {
            if(x == r) {
                x--;
                if(u == r) r--;
            } else if(x == l) {
                y--;
                if(u == r+1) u--;
            } else {
                x--;
            }
        } else {
            if (x == r) y++;
            else y--;
        }
    }
    
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) {
        cout << grid[i][j] << ' ';
        if(j == n) cout << endl;
    }
    return 0;
}