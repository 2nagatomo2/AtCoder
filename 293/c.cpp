#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w];
    rep(i, h) rep(j, w) cin >> a[i][j];

    vector<int> route;
    rep(i, h-1) route.push_back(0);
    rep(i, w-1) route.push_back(1);
    int ans = 0;
    set<int> nums;
    pair<int, int> pos;
    bool flag;
    do {
        flag = true;
        pos = make_pair(0, 0);
        nums.clear();
        nums.insert(a[0][0]);
        rep(i, h+w-2) {
            if(route[i] == 0) {
                pos.first++;
                if(nums.count(a[pos.first][pos.second])) {
                    flag = false;
                    break;
                } else nums.insert(a[pos.first][pos.second]);
            } else {
                pos.second++;
                if(nums.count(a[pos.first][pos.second])) {
                    flag = false;
                    break;
                } else nums.insert(a[pos.first][pos.second]);
            }
        }
        if(flag) ans++;
    } while(next_permutation(route.begin(), route.end()));

    cout << ans << endl;
    return 0;
}