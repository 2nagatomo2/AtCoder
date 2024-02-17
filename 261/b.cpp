#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    char a[n][n];
    rep(i, n) rep(j, n) cin >> a[i][j];
    rep(i, n) {
        rep(j, i) {
            switch (a[i][j])
            {
            case 'W':
                if(a[j][i] != 'L') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                break;
            case 'L':
                if(a[j][i] != 'W') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                break;
            case 'D':
                if(a[j][i] != 'D') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                break;
            default:
                break;
            }
        }
    }
    cout << "correct" << endl;
    return 0;
}