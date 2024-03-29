#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N;
    string T;
    cin >> N >> T;
    int x = 0, y = 0, dx = 1, dy = 0;
    rep(i, T.length()) {
        if(T[i] == 'S') {
            x += dx;
            y += dy;
        } else {
            swap(dx, dy);
            dy *= -1;
            // (1, 0) -> (0, -1) -> (-1, 0) -> (0, 1)
        }
    }
    cout << x << ' ' << y << endl;
    return 0;
}