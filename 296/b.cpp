#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s[8];
    char w[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    rep(i, 8) cin >> s[i];

    rep(i, 8) rep(j, 8) {
        if(s[i][j] == '*') {
            cout << w[j] << 8-i << endl;
            break;
        }
    }
    return 0;
}