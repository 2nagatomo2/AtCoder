#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, x;
    int ans = 0;
    cin >> n >> x;
    int s[n];
    rep(i, n) {
        cin >> s[i];
        if(s[i] <= x) ans += s[i];
    }

    cout << ans << endl;
    return 0;
}