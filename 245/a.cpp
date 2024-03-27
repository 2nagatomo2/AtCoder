#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a < c) cout << "Takahashi" << endl;
    else if(a == c) {
        if(b <= d) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    } else cout << "Aoki" << endl;
    return 0;
}