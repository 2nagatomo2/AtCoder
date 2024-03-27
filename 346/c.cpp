#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll N, K;
    cin >> N >> K;
    ll A[N];
    set<ll> s;
    rep(i, N) {
        cin >> A[i];
        s.insert(A[i]);
    }
    ll tmp = 0;
    for(auto itr = s.begin(); itr != s.end(); itr++) {
        if(*itr <= K) tmp += *itr;
    }
    ll ans = K * (K + 1) / 2 - tmp;
    cout << ans << endl;
    return 0;
}