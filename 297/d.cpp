#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    while(a != b) {
        if(a > b) {
            if((a - b) % b == 0) {
                cnt += (a - b) / b;
                break;
            } else {
                cnt += (a - b) / b + 1;
                a = a - b * ((a - b) / b + 1);
            }
        } else {
            if((b - a) % a == 0) {
                cnt += (b - a) / a;
                break;
            } else {
                cnt += (b - a) / a + 1;
                b = b - a * ((b - a) / a + 1);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}