#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll N;
    cin >> N;
    ll num = 998244353;
    ll ans;
    if(N % num == 0) {
        ans = 0;
    }
    else if(N >= num) {
        ans = N % num;
    } else if(0 <= N) {
        ans = N;
    } else if(-num <= N) {
        ans = N + num;
    } else {
        ans = num + (N % num);
    }
    cout << ans << endl;
    return 0;
}