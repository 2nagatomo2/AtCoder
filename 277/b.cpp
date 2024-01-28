#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string s[n];
    bool check = true;
    set<string> st;
    rep(i, n) {
        cin >> s[i];
        if(s[i][0] != 'H' && s[i][0] != 'D' && s[i][0] != 'C' && s[i][0] != 'S') check = false;
        if(s[i][1] != 'A' && s[i][1] != '2' && s[i][1] != '3' && s[i][1] != '4'
        && s[i][1] != '5' && s[i][1] != '6' && s[i][1] != '7' && s[i][1] != '8'
        && s[i][1] != '9' && s[i][1] != 'T' && s[i][1] != 'J' && s[i][1] != 'Q' && s[i][1] != 'K') check = false;
        if(st.count(s[i])) check = false;
        st.insert(s[i]);
    }

    if(check) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}