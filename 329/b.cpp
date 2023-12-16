#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n];
    int m = 0;
    rep(i, n) {
        cin >> a[i];
        m = max(m, a[i]);
    }
    sort(a, a+n);
    rep(i, n) {
        if (a[n-i-1] != m) {
            cout << a[n-i-1] << endl;
            break;
        }
    }
    return 0;
}