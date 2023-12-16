#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    rep(i, s.length()-1) {
        cout << s[i] << ' ';
    }
    cout << s[s.length()-1] << endl;
    return 0;
}