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
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;
    int min = 0, max = 0, x = 0;
    bool f = false;
    while (true) {
        if(a*x <= w && b*x >= w) {
            max++;
            x++;
            f = true;
        }
        else if(b*x < w) {
            min++;
            max++;
            x++;
        }
        else break;
    }
    max--;
    if(!f) cout << "UNSATISFIABLE" << endl;
    else cout << min << ' ' << max << endl;
    return 0;
}