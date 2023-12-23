#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N, X;
    ll W;
    ll workers[24];
    ll ans = 0;

    cin >> N;

    rep(i, 24) workers[i] = 0;

    rep(i, N) {
        cin >> W >> X;

        rep(j, 9) {
            workers[(8+j+X) % 24] += W;
        }
    }
    
    rep(i, 24) ans = max(ans, workers[i]);
    cout << ans << endl;
    return 0;
}