#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s[10];
    rep(i, 10) cin >> s[i];
    int a, b, c, d;
    bool flag = false;

    rep(i, 10) {
        rep(j, 10) {
        if(s[i][j] == '#') {
            a = i + 1;
            c = j + 1;
            flag = true;
            break;
            }
        }
        if(flag) break;
    }

    flag = false;
    for(int i=9; i>=0; i--) {
        for(int j=9; j>=0; j--) {
            if(s[i][j] == '#') {
                b = i + 1;
                d = j + 1;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    cout << a << ' ' << b << endl;
    cout << c << ' ' << d << endl;
    return 0;
}