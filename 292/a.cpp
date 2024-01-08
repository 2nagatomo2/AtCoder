#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    //transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    rep(i, s.length()) {
        s[i] += int('A') - int('a');
    }
    cout << s << endl;
    return 0;
}