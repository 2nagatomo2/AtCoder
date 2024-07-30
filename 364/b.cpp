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
    int h, w, si, sj;
    cin >> h >> w >> si >> sj;
    si--; sj--;
    vector<string> c(h);
    rep(i, h) cin >> c[i];
    string x;
    cin >> x;

    rep(i, x.length()) {
        switch (x[i]) {
            case 'L':
                sj = max(0, sj-1);
                if(c[si][sj] == '#') sj++;
                break;
            case 'R':
                sj = min(w-1, sj+1);
                if(c[si][sj] == '#') sj--;
                break;
            case 'U':
                si = max(0, si-1);
                if(c[si][sj] == '#') si++;
                break;
            case 'D':
                si = min(h-1, si+1);
                if(c[si][sj] == '#') si--;
                break;
            default:
                break;
        }
    }
    cout << si+1 << ' ' << sj+1 << endl;
    return 0;
}