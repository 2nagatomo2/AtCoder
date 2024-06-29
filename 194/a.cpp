#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int a, b;
    cin >> a >> b;
    if(a+b >= 15 && b >= 8) cout << 1 << endl;
    else if(a+b >= 10 && b >= 3) cout << 2 << endl;
    else if(a+b >= 3) cout << 3 << endl;
    else cout << 4 << endl;
    return 0;
}