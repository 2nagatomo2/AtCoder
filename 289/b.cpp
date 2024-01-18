#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    rep(i, m) {
        cin >> a[i];
        a[i]--;
    }
    vector<int> ans;
    int l = 0, r = 0, a_idx = 0;
    rep(l, n) {
        r = l;
        if(a[a_idx] == l) {
            while(a[a_idx] == r) {
                r++;
                a_idx++;
            }
        }
        for(int j=r; j>=l; j--) ans.push_back(j+1);
        l = r;
    }
    rep(i, n) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}