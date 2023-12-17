#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string s[n];
    rep(i, n) cin >> s[i];
    
    ll cnt_hor[n];
    ll cnt_ver[n];
    rep(i, n) {
        cnt_hor[i] = 0;
        cnt_ver[i] = 0;
    }

    rep(i, n) rep(j, n) {
        if(s[i][j] == 'o') {
            cnt_hor[i]++;
            cnt_ver[j]++;
        }
    }

    ll ans = 0;
    rep(i, n) rep(j, n) {
        if(cnt_hor[i] >= 2) {
            if(s[i][j] == 'o'){
                ans += (cnt_hor[i]-1) * (cnt_ver[j]-1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}