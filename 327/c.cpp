#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int A[9][9];
    bool check_hor[9];
    bool check_ver[9];
    bool check_box[9];

    // 入力
    rep(i, 9) {
        rep(j, 9) {
            cin >> A[i][j];
        }
    }

    rep(i, 9) {
        rep(l, 9) {
            check_hor[l] = false;
            check_ver[l] = false;
            check_box[l] = false;
        }
        rep(j, 9) {
            check_hor[A[i][j] - 1] = true;
        }
        rep(j, 9) {
            check_ver[A[j][i] - 1] = true;
        }
        rep(j, 3) {
            rep(k, 3) {
                check_box[A[3 * (i / 3) + j][3 * (i % 3) + k] - 1] = true;
            }
        }
        rep(l, 9) {
            if (!check_hor[l] || !check_ver[l] || !check_box[l]) {
                cout << "No" << endl;
                exit(0);
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}