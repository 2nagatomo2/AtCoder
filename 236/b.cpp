#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, a;
    cin >> n;
    vector<int> v(n, 0);
    rep(i, 4 * n - 1) {
        cin >> a;
        a--;
        v[a]++;
    }
    rep(i, n) {
        if(v[i] != 4) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}