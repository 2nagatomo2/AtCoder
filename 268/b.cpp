#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    if(s.length() > t.length()) cout << "No" << endl;
    else if(s == t.substr(0, s.length())) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}