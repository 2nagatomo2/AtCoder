#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int X, Y, N;
    cin >> X >> Y >> N;
    int ans = min(X * N, Y * (N / 3) + X * (N % 3));
    cout << ans << endl;
    return 0;
}