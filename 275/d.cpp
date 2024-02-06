#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

ll f(ll k) {
    if(k == 0) return 1;
    else return f(k/2) + f(k/3);
}
int main() {
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}