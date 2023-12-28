#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w];
    char ans[h][w];
    string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
            if(a[i][j] == 0) {
                ans[i][j] = '.';
                cout << ans[i][j];
            } else {
                ans[i][j] = alphabets[a[i][j]-1];
                cout << ans[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}