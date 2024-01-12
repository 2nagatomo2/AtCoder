#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    rep(i, s.length()) {
        if(int(s[i]) >= int('A') && int(s[i]) <= int('Z')) cout << i+1 << endl;
    }
    return 0;
}