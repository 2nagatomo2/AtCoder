#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    bool pre[t.length()+1], pos[t.length()+1];
    rep(i, t.length() + 1) {
        pre[i] = false;
        pos[i] = false;
    }

    pre[0] = true;
    rep(i, t.length()) {
        if(s[i] != t[i] && s[i] != '?' && t[i] != '?') {
            break;
        } else {
            pre[i+1] = true;
        }
    }

    pos[t.length()] = true;
    rep(i, t.length()) {
        if(s[s.length()-i-1] != t[t.length()-i-1] && s[s.length()-i-1] != '?' && t[t.length()-i-1] != '?') {
            break;
        } else {
            pos[t.length()-i-1] = true;
        }
    }

    rep(i, t.length()+1) {
        if(pre[i] && pos[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}