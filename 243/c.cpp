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
    vector<int> X(N), Y(N);
    rep(i, N) cin >> X[i] >> Y[i];
    string S;
    cin >> S;
    map<int, map<int, char>> mp;
    rep(i, N) {
        mp[Y[i]][X[i]] = S[i];
    }
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        int f = 0;
        for(auto itr2 = itr->second.begin(); itr2 != itr->second.end(); itr2++) {
            if(f == 0 && itr2->second == 'R') f++;
            else if(f == 1 && itr2->second == 'L') {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}