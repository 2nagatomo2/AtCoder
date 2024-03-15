#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, w;
    string s;
    cin >> n >> s;
    vector<int> w_c, w_a;
    rep(i, n) {
        cin >> w;
        if(s[i] == '0') w_c.push_back(w);
        else w_a.push_back(w);
    }
    sort(w_c.begin(), w_c.end());
    sort(w_a.begin(), w_a.end());

    int idx = 0, ans = max(w_c.size(),w_a.size());
    rep(i, w_a.size()) {
        int tmp = w_a.size() - i;
        REP(j, idx, w_c.size()) {
            if(w_a[i] <= w_c[j]) {
                break;
            }
            else idx++;
        }
        tmp += idx;
        ans = max(ans, tmp);
        if(idx == w_a.size()) break;
    }
    cout << ans << endl;
    return 0;
}