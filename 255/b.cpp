#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int a[k];
    vector<bool> light(n, false);
    vector<pair<long, long>> p(n);
    rep(i, k) {
        cin >> a[i];
        light[a[i]-1] = true;
    }
    long x, y;
    rep(i, n) {
        cin >> x >> y;
        p[i] = make_pair(x, y);
    }
    long r = 0, tmp;
    rep(i, n) {
        if(light[i]) continue;
        long tmp = 1e12;
        rep(j, k) {
            tmp = min(tmp, (p[i].first-p[a[j]-1].first)*(p[i].first-p[a[j]-1].first)+(p[i].second-p[a[j]-1].second)*(p[i].second-p[a[j]-1].second));
        }
        r = max(r, tmp);
    }
    cout << sqrt(r) << endl;
    return 0;
}