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
    ll a[n], a_[n];
    rep(i, n) {
        cin >> a[i];
        a_[i] = a[i];
    }
    sort(a_, a_+n);
    ll b[n];
    b[n-1] = 0;
    int cnt = 1;
    for(int i=n-2; i>=0; i--) {
        if(a_[i] == a_[i+1]) {
            b[i] = b[i+1];
            cnt++;
        }
        else {
            b[i] = b[i+1] + a_[i+1] * cnt;
            cnt = 1;
        }
    }

    rep(i, n) {
        int pos = lower_bound(a_, a_+n, a[i]) - a_;
        cout << b[pos] << ' ';
    }
    cout << "\n";
    return 0;
}