#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a*a + b*b < c*c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}