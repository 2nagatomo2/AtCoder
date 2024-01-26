#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, k, tmp;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, k) {
        cin >> tmp;
        if(i == n-1) break;
    }
    rep(i, n-k) cin >> a[i];
    rep(i, k) a.push_back(0);

    rep(i, n) cout << a[i] << ' ';
    cout << endl;
    return 0;
}