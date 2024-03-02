#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    ll n;
    cin >> n;
    string ans = "1";
    for(ll i=1; i*i*i<=n; i++) {
        string k = to_string(i * i * i);
        bool flag = true;
        rep(j, k.length()/2) {
            if(k[j] != k[k.length()-1-j]) {
                flag = false;
                break;
            }
        }
        if(flag) ans = k;
    }
    cout << ans << endl;
    return 0;
}