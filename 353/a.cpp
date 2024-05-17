#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    int h[n];
    rep(i, n) cin >> h[i];
    rep(i, n-1) {
        if(h[0] < h[i+1]) {
            cout << i+2 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}