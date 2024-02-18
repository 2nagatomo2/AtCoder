#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    ll red[n+1], blue[n+1];
    rep(i, n+1) {
        red[i] = 0;
        blue[i] = 0;
    }
    red[n] = 1;
    int tmp = n;
    ll ans = 0;
    while(n >= 2) {
        // レベルnの赤い宝石を交換
        red[n-1] += red[n];
        blue[n] += red[n] * x;

        // 青い石を交換
        red[n-1] += blue[n];
        blue[n-1] += blue[n] * y;
        n--;
    }
    
    cout << blue[1] << endl;
    return 0;
}