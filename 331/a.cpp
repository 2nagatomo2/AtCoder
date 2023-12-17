#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;
    if(d == D) {
        if(m == M) {
            y++;
            m = 1;
            d = 1;
        } else {
            m++;
            d = 1;
        }
    } else {
        d++;
    }

    cout << y << ' ' << m << ' ' << d << endl;
    return 0;
}