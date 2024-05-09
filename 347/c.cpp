#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    ll d[n];
    rep(i, n) {
        cin >> d[i];
        d[i] %= a + b;
    }
    sort(d, d+n);
    rep(i, n) {
        if(i == 0) {
            if(d[n-1] - d[0] + 1 <= a) {
                cout << "Yes" << endl;
                return 0;
            }
        } else {
            if(d[i-1] == d[i]) continue;
            else if((d[i-1]+a+b) - d[i] + 1 <= a) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}