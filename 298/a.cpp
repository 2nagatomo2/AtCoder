#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    string s;
    bool flag = false;
    cin >> n >> s;
    rep(i, n) {
        if(s[i] == 'o') {
            flag = true;
        } else if(s[i] == 'x') {
            cout << "No" << endl;
            exit(0);
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}