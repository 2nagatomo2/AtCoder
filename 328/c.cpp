#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    
    int check[n];
    rep(i, n) check[i] = 0;
    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) check[i] = check[i-1] + 1;
        else check[i] = check[i-1];
    }
    
    int l, r;
    int ans;
    rep(i, q) {
        cin >> l >> r;
        ans = check[r-1] - check[l-1];
        cout << ans << endl;
    }
    return 0;
}