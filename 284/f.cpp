#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N;
    string T, rev = "";
    cin >> N >> T;
    rep(i, 2 * N) {
        rev += T[2 * N - 1 - i];
    }

    rep(i, N) {
        if(T.substr(0, i+1) + T.substr(N+i+1, N-i-1) == rev.substr(N-i-1, N)) {
            cout << T.substr(0, i+1) + T.substr(N+i+1, N-i-1) << endl;
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}