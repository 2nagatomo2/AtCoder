#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    string s[n];
    rep(i, n) cin >> s[i];
    int cnt;
    
    rep(i, n) {
        rep(j, n-5) {
            // 縦を検索
            cnt = 0;
            rep(k, 6) {
                if(s[j+k][i] == '#') cnt++;
            }
            if(cnt >= 4) {
                cout << "Yes" << endl;
                return 0;
            }

            // 横を検索
            cnt = 0;
            rep(k, 6) {
                if(s[i][j+k] == '#') cnt++;
            }
            if(cnt >= 4) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    // 斜めを検索
    rep(i, n-5) {
        rep(j, n-5) {
            cnt = 0;
            rep(k, 6) {
                if(s[j+k][i+k] == '#') cnt++;
            }
            if(cnt >= 4) {
                cout << "Yes" << endl;
                return 0;
            }
            cnt = 0;
            rep(k, 6) {
                if(s[j+k][n-i-1-k] == '#') cnt++;
            }
            if(cnt >= 4) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}