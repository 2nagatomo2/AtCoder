#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> d(n);
    int a, b;
    rep(i, n-1) {
        cin >> a >> b;
        a--;
        b--;
        d[a].push_back(b);
        d[b].push_back(a);
    }

    rep(i, n) {
        if(d[i].size() != 1 && d[i].size() != n-1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}