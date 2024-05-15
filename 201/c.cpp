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
    int ans = 0, cnt = 0;
    rep(i, 10) if(s[i] == 'o') cnt++;
    int num;
    bool flag;
    set<int> st;
    rep(i, 10000) {
        flag = true;
        st.clear();
        rep(j, 4) {
            num = (i / int(pow(10, j))) % 10;
            if(s[num] == 'o') st.insert(num);
            else if(s[num] == 'x') {
                flag = false;
                break;
            }
        }
        if(flag && st.size() == cnt) ans++;
    }
    cout << ans << endl;
    return 0;
}