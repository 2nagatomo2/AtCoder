#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    int ans = (a + k - 1) % n;
    if(ans == 0) cout << n << endl;
    else cout << ans << endl;
    return 0;
}