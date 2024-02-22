#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int N;
    cin >> N;
    int Q[N], A[N], B[N];
    rep(i, N) cin >>Q[i];
    rep(i, N) cin >>A[i];
    rep(i, N) cin >>B[i];

    int ans = 0, i = 0;
    bool flag = true;
    while(true) {
        int tmp_a = i, tmp_b = 1000000;
        rep(j, N) {
            if(Q[j] < A[j] * i) flag = false;
        }
        if(!flag) break;
        rep(j, N) {
            if(B[j] == 0) continue;
            tmp_b = min(tmp_b, (Q[j] - i * A[j]) / B[j]);
        }
        ans = max(ans, tmp_a + tmp_b);
        i++;
    }
    cout << ans << endl;
    return 0;
}