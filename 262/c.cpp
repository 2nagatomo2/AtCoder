#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N;
    cin >> N;
    int A[N];
    rep(i, N) cin >> A[i];
    
    ll ans = 0, same = 0;
    rep(i, N) {
        if(A[i] == i+1) same++;
        else {
            if(A[i] > i+1 && A[A[i]-1] == i+1) ans++;
        }
    }
    ans += same * (same - 1) / 2;
    cout << ans << endl;
    return 0;
}