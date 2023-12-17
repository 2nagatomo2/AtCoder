#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    ll l, r;
    cin >> n >> l >> r;
    ll a[n];
    int x;
    rep(i, n) {
        cin >> a[i];
        if(a[i] <= l) x = l;
        else if(a[i] >= r) x = r;
        else x = a[i];
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}