#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int N, A1;
    cin >> N >> A1;

    rep(i, N-1) {
        int A;
        cin >> A;
        if (A != A1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}