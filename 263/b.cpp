#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N;
    cin >> N;
    int P[N-1];
    rep(i, N-1) cin >> P[i];
    int chi = N-2, ans = 1;
    while(P[chi] != 1) {
        chi = P[chi]-2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}