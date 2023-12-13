#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string S, T;
    cin >> S >> T;

    ll s_length = S.length();
    ll t_length = T.length();
    rep (i, t_length - s_length) {
        if (S == T) {
            cout << "Yes" << endl;
            break;
        } else {
            S = 1;
        }
    }
    return 0;
}