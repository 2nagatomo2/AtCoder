#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    string S;
    cin >> S;
    bool flag = true;
    if(int(S[0]) >= int('A') && int(S[0]) <= int('Z')) flag = true;
    else flag = false;
    REP(i, 1, S.length()) {
        if(int(S[i]) >= int('a') && int(S[i]) <= int('z')) continue;
        else flag = false;
    }
    cout << (flag ? "Yes" : "No") << endl;
    return 0;
}