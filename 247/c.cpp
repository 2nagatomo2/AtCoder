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
    string S[N];
    S[0] = "1";
    rep(i, N-1) {
        S[i+1] = S[i] + " " + to_string(i+2) + " " + S[i];
    }
    cout << S[N-1] << endl;
    return 0;
}