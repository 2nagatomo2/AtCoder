#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    int b_num = 0, r_num = 0;
    bool k_flag;
    rep(i, 8) {
        if(s[i] == 'B') b_num += i;
        if(s[i] == 'R') r_num++;
        if(s[i] == 'K') {
            if(r_num == 1) k_flag = true;
            else k_flag = false;
        }
    }

    if(b_num % 2 == 1 && k_flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}