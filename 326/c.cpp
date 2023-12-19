#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll N, M;
    cin >> N >> M;
    ll A[N];

    rep(i, N) {
        cin >> A[i];
    }
    sort(A, A+N);
    
    ll ans = 0;
    ll cnt = 0;
    rep(i, N) {
        auto l = A + i;
        auto r = upper_bound(A, A+N-1, A[i]+M-1);
        if(A[i]+M-1 == A[r-A]) {
            cnt = r - l + 1;
        } else {
            cnt = r - l;
        }    
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}