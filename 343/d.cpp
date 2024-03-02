#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, t;
    cin >> n >> t;
    vector<ll> score(n, 0);
    map<ll, int> mp;
    mp[0] = n;
    int a;
    ll b;
    int ans = 0;
    rep(i, t) {
        cin >> a >> b;
        mp[score[a-1]]--;
        if(mp[score[a-1]] == 0) mp.erase(score[a-1]);
        score[a-1] += b;
        mp[score[a-1]]++;
        cout << mp.size() << endl;
    }
    return 0;
}