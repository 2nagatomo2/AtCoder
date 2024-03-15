#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N, W;
    cin >> N >> W;
    int A[N];
    rep(i, N) cin >> A[i];

    set<int> st;
    rep(i, N) {
        if(A[i] <= W) st.insert(A[i]);
        rep(j, N) {
            if(i == j) break;
            if(A[i] + A[j] <= W) st.insert(A[i] + A[j]);
            rep(k, N) {
                if(i == k || j == k) break;
                if(A[i] + A[j] + A[k] <= W) st.insert(A[i] + A[j] + A[k]);
            }
        }
    }

    cout << st.size() << endl;
    return 0;
}