#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int X, Y;
    cin >> X >> Y;
    if (Y - X <= 2 && Y - X >= -3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}