#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int W;
    cin >> W;
    vector<int> ans;
    rep(i, 3) {
        rep(j, 99) {
            ans.push_back(pow(10,2*i)*(j+1));
        }
    }
    cout << ans.size() << endl;
    rep(i, ans.size()) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}