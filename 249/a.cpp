#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi, aoki;
    int num_t = x / (a + c), num_a = x / (d + f);
    takahashi = b * a * num_t;
    if(x - ((a + c) * num_t) <= a) takahashi += b * (x - ((a + c) * num_t));
    else takahashi += b * a;
    aoki = d * e * num_a;
    if(x - ((d + f) * num_a) <= d) aoki += e * (x - (d + f) * num_a);
    else aoki += e * d;
    if(takahashi > aoki) cout << "Takahashi" << endl;
    else if(takahashi < aoki) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}