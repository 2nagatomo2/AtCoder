#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    rep(i, n) {
        rep(j, i+1) {
            if(j == 0 || j == i) a[i].push_back(1);
            else a[i].push_back(a[i-1][j-1] + a[i-1][j]);
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}