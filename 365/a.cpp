#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,b,n) for(int i=b; i<n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int y, d = 365;
    cin >> y;
    if(y % 4 != 0) cout << d << endl;
    else if(y % 100 != 0) cout << d+1 << endl;
    else if(y % 400 != 0) cout << d << endl;
    else cout << d+1 << endl;
    return 0;
}