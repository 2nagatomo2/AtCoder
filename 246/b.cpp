#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    double a, b;
    cin >> a >> b;
    double x = a / sqrt(a*a+b*b), y = b / sqrt(a*a+b*b);
    cout << fixed << setprecision(10) << x << ' ' << y << endl;
    return 0;
}