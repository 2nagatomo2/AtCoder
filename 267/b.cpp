#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    int row[7];
    rep(i, 7) row[i] = 0;
    rep(i, 10) {
        if(s[0] == '1') {
            cout << "No" << endl;
            return 0;
        }
        if(i == 6) if(s[i] == '1') row[0]++;
        if(i == 3) if(s[i] == '1') row[1]++;
        if(i == 1 || i == 7) if(s[i] == '1') row[2]++;
        if(i == 4) if(s[i] == '1') row[3]++;
        if(i == 2 || i == 8) if(s[i] == '1') row[4]++;
        if(i == 5) if(s[i] == '1') row[5]++;
        if(i == 9) if(s[i] == '1') row[6]++;
    }

    bool l = false, m = false, r = false;
    rep(i, 7) {
        if(row[i]) l = true;
        if(!row[i] && l) m = true;
        if(row[i] && m) r = true;
    }
    if(l && r && m) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}