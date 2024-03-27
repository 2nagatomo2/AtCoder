#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int W, B;
    cin >> W >> B;
    string s = "wbwbwwbwbwbw";
    rep(i, 9) s += s; 
    rep(i, s.length()) {
        int w = 0, b = 0;
        REP(j, i, s.length()) {
            if(s[j] == 'w') w++;
            else b++;
            if(W == w && B == b) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}