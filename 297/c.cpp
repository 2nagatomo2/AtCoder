#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, h) cin >> s[i];
    rep(i, h) {
        rep(j, w-1) {
            if(s[i][j] == 'T' && s[i][j+1] == 'T') {
                s[i][j] = 'P';
                s[i][j+1] = 'C';
            }
        }
        cout << s[i] << endl;
    }

    return 0;
}