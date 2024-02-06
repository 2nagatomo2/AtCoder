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
    int cnt = 0;
    rep(i, w) {
        cnt = 0;
        rep(j, h) {
            if(s[j][i] == '#') cnt++;
        }
        cout << cnt << ' ';
    }
    cout << endl;
    return 0;
}