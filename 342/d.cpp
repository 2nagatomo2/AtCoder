#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, ll> cnt;
    rep(i, n) cin >> a[i];
    ll ans = 0;
    rep(i, n) {
        if(a[i] == 0) ans += n - 1;
        else {
            for(int j = 2; j * j <= a[i]; j++) {
                while(a[i] % (j * j) == 0) a[i] /= j * j;
            }
        }
        cnt[a[i]]++;
    }
    
    for(auto itr = cnt.begin(); itr != cnt.end(); itr++) {
        if(itr->first == 0) ans -= itr->second * (itr->second - 1) / 2;
        else {
            ans += itr->second * (itr->second - 1) / 2;
        }
    }
    cout << ans << endl;
    return 0;
}