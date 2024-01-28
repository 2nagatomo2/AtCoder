#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, x;
    cin >> n >> x;
    int p[n];
    rep(i, n) cin >> p[i];

    rep(i, n) {
        if(p[i] == x) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}