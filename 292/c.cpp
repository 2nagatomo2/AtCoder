#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a, b, c, d, y;
    int ans = 0, cnt1, cnt2;
    for(int x=1; x<n; x++) {
        y = n - x;
        cnt1 = 0;
        cnt2 = 0;
        for(int a=1; a <= sqrt(x); a++) {
            if(x % a == 0) {
                b = x / a;
                if(a == b) cnt1++;
                else cnt1 += 2;
            }
        }
        for(int c=1; c <= sqrt(y); c++) {
            if(y % c == 0) {
                d = y / c;
                if(c == d) cnt2++;
                else cnt2 += 2;
            }
        }
        ans += cnt1 * cnt2;
    }
    cout << ans << endl;
    return 0;
}