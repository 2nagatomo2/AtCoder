#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N;
    string S;
    cin >> N >> S;
    ll C[N];
    rep(i, N) cin >> C[i];
    vector<vector<ll>> cost_sum(N, vector<ll>(2, 0));
    if(S[0] == '0') cost_sum[0][1] = C[0];
    else cost_sum[0][0] = C[0];
    string start_with_0 = "0", start_with_1 = "1";
    rep(i, N-1) {
        if(start_with_0[i] == '0' && S[i+1] == '0' || start_with_0[i] == '1' && S[i+1] == '1') {
            cost_sum[i+1][0] = cost_sum[i][0] + C[i+1];
            if(S[i+1] == '0') start_with_0 += '1';
            if(S[i+1] == '1') start_with_0 += '0';
        } else {
            cost_sum[i+1][0] = cost_sum[i][0];
            start_with_0 += S[i+1];
        }

        if(start_with_1[i] == '0' && S[i+1] == '0' || start_with_1[i] == '1' && S[i+1] == '1') {
            cost_sum[i+1][1] = cost_sum[i][1] + C[i+1];
            if(S[i+1] == '0') start_with_1 += '1';
            if(S[i+1] == '1') start_with_1 += '0';
        } else {
            cost_sum[i+1][1] = cost_sum[i][1];
            start_with_1 += S[i+1];
        }
    }
    ll ans = 1e18;
    REP(i, 1, N) {
        chmin(ans, cost_sum[i-1][0] + cost_sum[N-1][1] - cost_sum[i-1][1]);
        chmin(ans, cost_sum[i-1][1] + cost_sum[N-1][0] - cost_sum[i-1][0]);
    }
    cout << ans << endl;
    return 0;
}