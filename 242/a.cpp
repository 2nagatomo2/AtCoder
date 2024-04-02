#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    double a, b, c, x;
    cin >> a >> b >> c >> x;
    if(x <= a) cout << 1 << endl;
    else if(x <= b) cout << fixed << setprecision(10) << c / (b - a) << endl;
    else cout << 0 << endl;
    return 0;
}