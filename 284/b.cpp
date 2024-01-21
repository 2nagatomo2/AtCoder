#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int t;
    cin >> t;
    int n, a, cnt;
    rep(i, t) {
        cin >> n;
        cnt = 0;
        rep(j, n) {
            cin >> a;
            if(a % 2 == 1) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}