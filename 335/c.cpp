#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<pair<int, int> > head;
    head.push_back(make_pair(1, 0));
    int query, p, move = 0;
    char c;
    rep(i, q) {
        cin >> query;
        if(query == 1) {
            cin >> c;
            if(c == 'R') {
                head.push_back(make_pair(head[move].first+1, head[move].second));
                move++;
            } else if(c == 'L') {
                head.push_back(make_pair(head[move].first-1, head[move].second));
                move++;
            } else if(c == 'U') {
                head.push_back(make_pair(head[move].first, head[move].second+1));
                move++;
            } else {
                head.push_back(make_pair(head[move].first, head[move].second-1));
                move++;
            }
        } else if(query == 2){
            cin >> p;
            if(move < p) {
                cout << p - move << ' ' << 0 << endl;
            } else {
                cout << head[move-p+1].first << ' ' << head[move-p+1].second << endl;
            }
        }
    }
    return 0;
}