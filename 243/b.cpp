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
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    int cnt = 0;
    rep(i, N) {
        if(A[i] == B[i]) cnt++;
    }
    cout << cnt << endl;
    set<int> st;
    rep(i, N) rep(j, N) {
        if(A[i] == B[j] && i != j) st.insert(A[i]);
    }
    cout << st.size() << endl;
    return 0;
}