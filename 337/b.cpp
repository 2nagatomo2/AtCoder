#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    char extends = s[0];
    rep(i, s.length()) {
        if(s[i] == extends) continue;
        else if(extends == 'A' && s[i] == 'B') extends = 'B';
        else if(s[i] == 'C') extends = 'C';
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}