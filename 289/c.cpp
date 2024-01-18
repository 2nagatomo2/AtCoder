#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int c[n], a;
    vector<set<int> > st(n);
    rep(i, n) {
        cin >> c[i];
        rep(j, c[i]) {
            cin >> a;
            st[i].insert(a);
        } 
    }

    rep(i, n) {
        for(auto iter = st[i].begin(); iter != st[i].end(); iter++) {
            cout << *iter << ' ';
        }
        cout << endl;
    } 
    vector<vector<int> > choice(n);
    rep(i, n) {
        rep(j, n) {
            if(i <= j) choice[i].push_back(1);
            else choice[i].push_back(0);
        }
    }

    int ans = 0;
    set<int> tmp_set;
    rep(i, n){
        do
        {
            rep(j, n) {
                cout << choice[i][j] << ' ';
            }
            cout << endl;
            tmp_set.clear();
            set<int> tmp2_set;
            rep(j, n) {
                if(choice[i][j] == 1) {
                    set_union(tmp_set.begin(), tmp_set.end(), st[i].begin(), st[i].end(), inserter(tmp2_set, tmp2_set.begin()));
                    tmp_set.swap(tmp2_set);
                }
            }
            for(auto iter = tmp_set.begin(); iter != tmp_set.end(); iter++) {
                cout << *iter << ' ';
            }
            cout << endl;

            if(tmp_set.size() == n) ans++;
        } while (next_permutation(choice[i].begin(), choice[i].end()));
    }
    cout << ans << endl;
    return 0;
}