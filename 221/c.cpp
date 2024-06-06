#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (ll i=0; i<(n); i++)
#define REP(i,b,n) for(ll i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

ll p(ll a, ll x) {
    ll res = 1;
    rep(i, x) {
        res *= a;
    }
    return res;
}

int main() {
    ll n;
    cin >> n;
    ll m = to_string(n).length();
    vector<ll> nums;
    while(n > 0) {
        nums.push_back(n % 10);
        n /= 10;
    }

    ll ans = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq1, pq2;
    rep(i, 1 << m) {
        ll tmp = i;
        rep(j, m) {
            if(tmp % 2 == 1) {
                pq1.push(nums[j]);
            } else {
                pq2.push(nums[j]);
            }
            tmp /= 2;
        }
        ll num1 = 0, num2 = 0;
        int size1 = pq1.size(), size2 = pq2.size();
        rep(j, size1) {
            num1 += pq1.top() * p(10, j);
            pq1.pop();
        }
        rep(j, size2) {
            num2 += pq2.top() * p(10, j);
            pq2.pop();
        }
        chmax(ans, num1 * num2);
    }
    cout << ans << endl;
    return 0;
}