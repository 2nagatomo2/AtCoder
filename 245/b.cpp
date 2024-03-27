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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    bool flag;
    rep(i, 2001) {
        flag = true;
        rep(j, n) {
            if(a[j] == i) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}