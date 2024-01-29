#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int p[n];
    rep(i, n) {
        cin >> p[i];
    }
    prev_permutation(p, p+n);
    rep(i, n) cout << p[i] << ' ';
    cout << endl;
    return 0;
}