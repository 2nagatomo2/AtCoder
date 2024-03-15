#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int c[3][3];
    rep(i, 3) rep(j, 3) cin >> c[i][j];
    int x[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    double cnt = 0;
    do
    {
        bool flag = true;
        vector<vector<int>> tmp(3, vector<int>(3, -1));
        rep(i, 9) {
            int h = x[i]/3, w = x[i]%3;
            tmp[h][w] = c[h][w];
            if(tmp[h][(w+1)%3] != -1 && tmp[h][(w+2)%3] != -1 && tmp[h][(w+1)%3] == tmp[h][(w+2)%3]){
                flag = false;
                break;
            }
            if(tmp[(h+1)%3][w] != -1 && tmp[(h+2)%3][w] != -1 && tmp[(h+1)%3][w] == tmp[(h+2)%3][w]){
                flag = false;
                break;
            }
            if(h == w) {
                if(tmp[(h+1)%3][(w+1)%3] != -1 && tmp[(h+2)%3][(w+2)%3] != -1 && tmp[(h+1)%3][(w+1)%3] == tmp[(h+2)%3][(w+2)%3]) {
                    flag = false;
                    break;
                }
            }
            if(h + w == 2) {
                if(tmp[(h+1)%3][(w+2)%3] != -1 && tmp[(h+2)%3][(w+1)%3] != -1 && tmp[(h+1)%3][(w+2)%3] == tmp[(h+2)%3][(w+1)%3]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cnt++;
    } while (next_permutation(x, x+9));
    
    cout << fixed << setprecision(10) << cnt / 362880. << endl;
    return 0;
}