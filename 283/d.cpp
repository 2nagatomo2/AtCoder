#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    stack<char> st;
    set<char> words;
    int cnt_l = 0, cnt_r = 0;
    char tmp = ' ';
    bool state = true;
    rep(i, s.length()) {
        if(s[i] == '(') {
            st.push(s[i]);
        } else if(s[i] == ')') {
            cnt_l = 0;
            cnt_r = 1;
            while(cnt_l != cnt_r) {
                tmp = st.top();
                st.pop();
                if(tmp == '('){
                    cnt_l++;
                } else if(tmp == ')') {
                    cnt_r++;
                } else {
                    words.erase(tmp);
                }
            }
        } else {
            if(words.count(s[i])) {
                state = false;
                break;
            } else {
                st.push(s[i]);
                words.insert(s[i]);
            }
        }
    }

    if(state) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}