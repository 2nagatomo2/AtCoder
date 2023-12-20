#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll n, t;
    cin >> n >> t;
    ll c[n], r[n];
    rep(i, n) cin >> c[i];
    rep(i, n) cin >> r[i];

    int ans = -1;
    ll score = 0;
    bool flag = false;
    rep(i, n) {
        if(c[i] == t) {
            if(score < r[i]){
                score = r[i];
                ans = i+1;
            }
        }
    }

    if(ans == -1) {
        t = c[0];
        rep(i, n) {
            if(c[i] == t) {
                if(score < r[i]){
                    score = r[i];
                    ans = i+1;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}