#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            cout << a[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}