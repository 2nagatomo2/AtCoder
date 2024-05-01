#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, m;
    cin >> n >> m;
    char a[2*n][m];
    priority_queue<int> pq;
    map<int, set<int>> mp;
    rep(i, 2*n) {
        rep(j, m) {
            cin >> a[i][j];
        }
        pq.push(0);
        mp[0].insert(i);
    }
    
    vector<pair<int, int>> points;
    rep(i, m) {
        points.clear();
        rep(j, n) {
            int point1 = pq.top();
            int player1 = *mp[point1].begin();
            pq.pop();
            mp[point1].erase(player1);
            int point2 = pq.top();
            int player2 = *mp[point2].begin();
            pq.pop();
            mp[point2].erase(player2);
            
            if(a[player1][i] == a[player2][i]) {
                // 何もしない
            } else if((a[player1][i] == 'G' && a[player2][i] == 'C') || (a[player1][i] == 'C' && a[player2][i] == 'P') || (a[player1][i] == 'P' && a[player2][i] == 'G')) {
                point1++;
            } else {
                point2++;
            }
            points.push_back({point1, player1});
            points.push_back({point2, player2});
        }
        rep(j, 2*n) {
            pq.push(points[j].first);
            mp[points[j].first].insert(points[j].second);
        }
    }

    rep(i, 2*n) {
        int point = pq.top();
        cout << *mp[point].begin()+1 << endl;
        pq.pop();
        mp[point].erase(*mp[point].begin());
    }
    return 0;
}