#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    rep(i, n) {
        cin >> a[i] >> b[i];
        cout << a[i] + b[i] << endl;
    }
    return 0;
}