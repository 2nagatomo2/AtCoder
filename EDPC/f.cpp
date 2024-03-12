#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b);
#define chmin(a, b) a = min(a, b);

int main() {
    string s, t;
    cin >> s >> t;
    int sl = s.length(), tl = t.length();

    vector<vector<int>> dp2(sl+1, vector<int>(tl+1, 0));

    for(int i = 1; i <= sl; i++) {
        for(int j = 1; j <= tl; j++) {
            if(s[i-1] == t[j-1]) {
                dp2[i][j] = dp2[i-1][j-1] + 1;
            }
            else {
                if(dp2[i][j-1] < dp2[i-1][j]) {
                    dp2[i][j] = dp2[i-1][j];
                } else {
                    dp2[i][j] = dp2[i][j-1];
                }
            }
        }
    }

    // 最長部分文字列の復元
    string ans = "";
    int i = sl, j = tl;
    while(i > 0 && j > 0) {
        if(dp2[i][j] == dp2[i-1][j]) {
            i--;
        } else if(dp2[i][j] == dp2[i][j-1]) {
            j--;
        } else {
            ans = s[i-1] + ans;
            i--;
            j--;
        }
    }
    cout << ans << endl;
    return 0;
}