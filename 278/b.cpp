#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int H, M;
    cin >> H >> M;
    int A, B, C, D;
    A = H / 10;
    B = H % 10;
    C = M / 10;
    D = M % 10;

    int h, m;
    if(A <= 1) {
        if(B <= 5) {
            h = 10 * A + B;
            m = 10 * C + D;
        } else {
            h = 20;
            m = 0;
        }
    } else {
        if(C <= 3) {
            h = 10 * A + B;
            m = 10 * C + D;
        } else {
            h = (10 * A + B + 1) % 24;
            m = 0;
        }
    }
    cout << h << ' ' << m << endl;
    return 0;
}