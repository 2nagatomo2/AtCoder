#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i+=2) {
        char tmp = s[i];
        s[i] = s[i+1];
        s[i+1] = tmp;
    }
    cout << s << endl;
    return 0;
}