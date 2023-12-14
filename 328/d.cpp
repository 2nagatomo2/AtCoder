#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    stack<char> st;
    string ans = "";
    char word1, word2, word3;
    rep(i, s.length()) {
        if(st.size() == 0) {
            word1 = s[i];
            st.push(s[i]);
        } else if(st.size() == 1) {
            word1 = st.top();
            word2 = s[i];
            st.push(s[i]);
        } else if(st.size() == 2){
            word3 = s[i];
            word2 = st.top();
            st.pop();
            word1 = st.top();
            if(word1 == 'A' && word2 == 'B' && word3 == 'C') {
                st.pop();
            } else {
                st.push(word2);
                st.push(word3);
            }
        } else {
            word3 = s[i];
            word2 = st.top();
            st.pop();
            word1 = st.top();
            if(word1 == 'A' && word2 == 'B' && word3 == 'C') {
                st.pop();
            } else {
                st.push(word2);
                st.push(word3);
            }
        }
    }

    while(!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }

    cout << ans << endl;
    return 0;
}