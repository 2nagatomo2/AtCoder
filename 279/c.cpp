#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    string s[h], t[h];
    rep(i, h) cin >> s[i];
    rep(i, h) cin >> t[i];
    vector<string> s_vec(w), t_vec(w);
    
    rep(j, w) {
        string s_tmp = "", t_tmp = "";
        rep(i, h) {
            s_tmp += s[i][j];
            t_tmp += t[i][j];
        }
        s_vec[j] = s_tmp;
        t_vec[j] = t_tmp;
    }
    
    sort(s_vec.begin(), s_vec.end());
    sort(t_vec.begin(), t_vec.end());

    if(s_vec == t_vec) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}