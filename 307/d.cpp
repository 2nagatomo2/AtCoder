#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    stack<int> st;
    bool erase[n];
    string ans = "";

    rep(i, n) erase[i] = false;

    rep(i, n) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            if (!st.empty()) {
                int begin = st.top();
                st.pop();
                for(int j=begin; j<=i; j++) erase[j] = true;
            }
        }
    }

    rep(i, n) if(!erase[i]) ans += s[i];
    cout << ans << endl;

    return 0;
}