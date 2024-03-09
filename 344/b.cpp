#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    stack<int> st;
    int a = 1;
    while(cin >> a) {
        st.push(a);
        if(a == 0) break;
    }
    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}