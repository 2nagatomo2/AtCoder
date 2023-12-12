#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N;
    string S;
    cin >> N >> S;
    rep(i, N-1) {
        if (S[i] == 'a') {
            if (S[i+1] == 'b') {
                cout << "Yes" << endl;
                exit(0);
            }
        } else if (S[i] == 'b') {
            if (S[i+1] == 'a') {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }
    cout << "No" << endl;
    return 0;
}