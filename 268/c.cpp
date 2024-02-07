#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int p[n];
    int rot[n];
    rep(i, n) {
        cin >> p[i];
        rot[i] = 0;
    }
    rep(i, n) {
        if(p[i] <= i) p[i] += n;
        rot[(p[i]-i)%n]++;
        rot[(p[i]-i+1)%n]++;
        rot[(p[i]-i-1)%n]++;
    }
    int ans = 0;
    rep(i, n) {
        ans = max(ans, rot[i]);
    }
    cout << ans << endl;
    return 0;
}