#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

ull my_pow(int n) {
    ull res = 1;
    rep(i, n) res *= 2;
    return res;
}

int main() {
    ull n;
    cin >> n;
    vector<ull> ans;
    ans.push_back(0);
    int cnt = 0;
    while(n > 0) {
        if(n % 2 == 1) {
            ull l = ans.size();
            ull tmp = my_pow(cnt);
            rep(i, l) ans.push_back(ans[i] + tmp);
        }
        n /= 2;
        cnt++;
    }

    rep(i, ans.size()) cout << ans[i] << endl;
    return 0;
}