#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    ll a[n];
    vector<ll> even, odd;
    rep(i, n) {
        cin >> a[i];
        if(a[i] % 2 == 1) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }
    sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());
    if(even.size() <= 1 && odd.size() <= 1) cout << -1 << endl;
    else if(even.size() <= 1) cout << odd[0]+odd[1] << endl;
    else if(odd.size() <= 1) cout << even[0]+even[1] << endl;
    else cout << max(odd[0]+odd[1], even[0]+even[1]) << endl;
    return 0;
}