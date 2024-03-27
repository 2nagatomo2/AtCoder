#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    set<int> st;
    deque<int> dq;
    int a;
    rep(i, n) {
        cin >> a;
        if(mp.count(a)) mp[a]++;
        else mp[a] = 1;
        st.insert(a);
    }
    for(auto itr = st.begin(); itr != st.end(); itr++) {
        dq.push_back(*itr);
    }
    int x = 0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        x += itr->second - 1;
    }
    int ans = 0;
    while(!dq.empty() || x != 0) {
        int pos = dq.front();
        if(pos == ans + 1) {
            ans++;
            dq.pop_front();
        }
        else {
            if(x > 0) x--;
            else dq.pop_back();
            if(x == 0 && dq.empty()) break;
            if(x > 0) x--;
            else dq.pop_back();
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}