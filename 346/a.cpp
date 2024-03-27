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
    cin >> N;
    int A[N], B[N-1];
    rep(i, N) cin >> A[i];
    rep(i, N-1) B[i] = A[i] * A[i+1];

    rep(i, N-1) cout << B[i] << ' ';
    cout << endl;
    return 0;
}