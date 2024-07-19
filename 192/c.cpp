#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n, k;
    cin >> n >> k;
    int a = n;
    rep(i, k) {
        vector<int> nums;
        int l = to_string(a).length();
        rep(j, l) {
            nums.push_back(a % 10);
            a /= 10;
        }
        sort(all(nums));
        a = 0;
        int base = 1;
        for(auto itr = nums.begin(); itr != nums.end(); itr++) {
            a += *itr * base;
            base *= 10;
        }
        base = 1;
        for(auto itr = nums.rbegin(); itr != nums.rend(); itr++) {
            a -= *itr * base;
            base *= 10;
        }
    }

    cout << a << endl;
    return 0;
}