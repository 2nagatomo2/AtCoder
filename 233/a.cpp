#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int x, y;
    cin >> x >> y;
    if(x > y) cout << 0 << endl;
    else {
        cout << (y - x) / 10 + ((y - x) % 10 != 0) << endl;
    }
    return 0;
}