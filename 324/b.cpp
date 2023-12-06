#include <iostream>
#include <vector>
#include <string>

using namespace std;
using ull = unsigned long long;
using ll = long long;

#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    ll N;
    cin >> N;
    while (N % 2 == 0) {
        N /= 2;
    }
    while (N % 3 == 0) {
        N /= 3;
    }

    if (N == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}