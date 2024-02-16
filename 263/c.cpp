#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    int ans[N];
    rep(i, N) ans[i] = i+1;
    while(ans[0] != M - N + 1) {
        rep(i, N) cout << ans[i] << ' ';
        cout << endl;
        rep(i, N) {
            if(ans[N-1] != M) {
                ans[N-1]++;
                break;
            } else {
                bool flag = false;
                rep(j, N-1) {
                    if(ans[N-2-j] != M-1-j) {
                        ans[N-2-j]++;
                        rep(k, j+1) ans[N-j+k-1] = ans[N-j+k-2] + 1;
                        flag = true;
                        break;
                    }
                }
                if(flag) break;
            }
        }
    }
    rep(i, N) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}