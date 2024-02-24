#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<int> v(10, 0);
    rep(i, n) { 
        v[s % 10]++;
        s /= 10;
    }

    ll max_val = 0;
    rep(i, 10) {
        rep(j, v[9-i]) {
            max_val = max_val * 10 + (9-i);
        }
    }
    ll ans = 0;
    for(ll i=0; i*i <= max_val; i++) {
        ll tmp = i * i;
        vector<int> v_tmp(10, 0);
        while(tmp > 0) {
            v_tmp[tmp % 10]++;
            tmp /= 10;
        }
        bool flag = true;
        rep(j, 10) {
            if(j == 0) continue;
            if(v[j] != v_tmp[j]) {
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;
    return 0;
}