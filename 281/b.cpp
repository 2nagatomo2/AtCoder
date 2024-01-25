#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    if(s.length() != 8) {
        cout << "No" << endl;
        return 0;
    }

    if(int(s[0]) > int('Z') || int(s[0]) < int('A')) {
        cout << "No" << endl;
        return 0;
    }

    if(int(s[7]) > int('Z') || int(s[7]) < int('A')) {
        cout << "No" << endl;
        return 0;
    }

    if(stoi(s.substr(1, 6)) >= 100000) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}