#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n];
    bool b[n];
    int cnt = 0;
    rep(i, n) {
        cin >> a[i];
        b[i] = false;
    }
    rep(i, n) {
        if(!b[i]){
            if(!b[a[i] - 1]) {
                b[a[i] - 1] = true;
                cnt++;
            }
        }
    }
    cout << n - cnt << endl;
    rep(i, n) {
        if(!b[i]) cout << i+1 << ' ';
    }
    cout << endl;
    return 0;
}