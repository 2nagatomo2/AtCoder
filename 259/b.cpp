#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    if(s[0] != t[0] || s[1] != t[1]) {
        cout << "No" << endl;
        exit(0);
    }

    for(int i=2; i<t.length(); i++) {
        if(s[i] != t[i]) {
            if(s[i-1] == s[i-2] && s[i-1] == t[i]) {
                s = s.substr(0, i) + s[i-1] + s.substr(i, s.length() - i);
            } else {
                cout << "No" << endl;
                exit(0);
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}