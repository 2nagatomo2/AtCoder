#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i, b, n) for(int i=b; i<(n); i++)

int main() {
    string s[9];
    int ans = 0;
    rep(i, 9) cin >> s[i];
    
    rep(i, 9) {
        rep(j, 9) {
            if(s[i][j] != '#') continue;
            REP(k, i, 9) {
                rep(l, 9) {
                    if(i == k && l <= j) continue;
                    if(s[k][l] == '#') {
                        int vh = k - i, vw = l - j;
                        if(vw < 0) {
                            if(i - vw < 9 && j + vh < 9) {
                                if(s[i-vw][j+vh] == '#') {
                                    if(i-vw+vh < 9) {
                                        if(s[i-vw+vh][j+vh+vw] == '#') ans++;
                                    } 
                                }
                            }
                        } else {
                            if(i + vw < 9 && j - vh >= 0) {
                                if(s[i+vw][j-vh] == '#') {
                                    if(i+vw+vh < 9) {
                                        if(s[i+vw+vh][j-vh+vw] == '#') ans++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans / 2 << endl;
    return 0;
}