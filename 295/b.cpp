#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int r, c;
    cin >> r >> c;
    string b[r];
    vector<pair<int, int> > bomb;
    rep(i, r) cin >> b[i];
    int power;
    rep(i, r) rep(j, c) {
        if(b[i][j] != '.' && b[i][j] != '#') {
            power = (int)b[i][j] - (int)'0';
            bomb.push_back(make_pair(i, j));
            rep(k, r) rep(l, c) {
                if(abs(i-k) + abs(j-l) <= power) {
                    if(b[k][l] == '#' || b[k][l] == '.') b[k][l] = '.';
                }
            }
        }
    }

    for(auto v : bomb) {
        b[v.first][v.second] = '.';
    }

    rep(i, r) cout << b[i] << endl; 
    return 0;
}