#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll n, k;
    cin >> n >> k;
    rep(i, k) {
        if(n % 200 == 0) n /= 200;
        else {
            n *= 1000;
            n += 200;
        }
    }
    cout << n << endl;
    return 0;
}