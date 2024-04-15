#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k, x;
    cin >> n >> k;
    vector<int> p(n, 0);
    vector<int> p3(n);
    rep(i, n) {
        rep(j, 3) {
            cin >> x;
            p[i] += x;
            if(j == 2) p3[i] = p[i];
        }
    }
    sort(p3.begin(), p3.end());
    rep(i, n) {
        int tmp = upper_bound(p3.begin(), p3.end(), p[i] + 300) - p3.begin();
        if(n - tmp + 1 <= k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }    
    return 0;
}