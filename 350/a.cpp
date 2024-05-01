#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    string s;
    cin >> s;
    if(s.substr(3, 3) == "000") cout << "No" << endl;
    else if(s[3] == '0' || s[3] == '1' || s[3] == '2') cout << "Yes" << endl;
    else if(s[3] == '3') {
        if(s.substr(4, 2) == "16") cout << "No" << endl;
        else if(int(s[4]) >= int('5')) cout << "No" << endl;
        else cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}