#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    rep(i, s.length()) {
        if(s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }

    cout << s << endl;
    return 0;
}