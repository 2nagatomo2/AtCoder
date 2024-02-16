#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N, M;
    ll T;
    cin >> N >> M >> T;
    int A[N-1], X[M], Y[M];
    rep(i, N-1) cin >> A[i];
    rep(i, M) cin >> X[i] >> Y[i];

    int idx = 0;
    for(int i = 1; i <= N - 1; i++) {
        if(i == X[idx]) {
            T += Y[idx];
            idx++;
        }
        T -= A[i-1];
        if(T <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}