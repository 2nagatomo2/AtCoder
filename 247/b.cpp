#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N;
    cin >> N;
    string s[N], t[N];
    rep(i, N) cin >> s[i] >> t[i];

    rep(i, N) {
        bool f1 = true, f2 = true;
        rep(j , N) {
            if(i == j) continue;
            else {
                if(s[i] == s[j]) f1 = false;
                if(s[i] == t[j]) f1 = false;
                if(t[i] == s[j]) f2 = false;
                if(t[i] == t[j]) f2 = false;
            }
            if(!f1 && !f2) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}