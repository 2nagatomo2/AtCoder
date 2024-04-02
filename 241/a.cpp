#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int a[10];
    rep(i, 10) cin >> a[i];
    int now = 0;
    rep(i, 3) {
        now = a[now];
    }
    cout << now << endl;
    return 0;
}