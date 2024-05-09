#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) {
        cin >> a[i];
        if(a[i] % k == 0) cout << a[i] / k << ' ';
    }
    cout << endl;
    return 0;
}