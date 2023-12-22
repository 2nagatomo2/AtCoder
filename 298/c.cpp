#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    // vector<priority_queue<int, vector<int>, greater<int> > > box(n+1);
    vector<vector<int> > box(n+1);
    vector<set<int> > sets(3000000);
    int query, i, j;
    queue<int> copy_box;
    rep(k, q) {
        cin >> query;
        if(query == 1) {
            cin >> i >> j;
            //box[j].push(i);
            box[j].push_back(i);
            sets[i].insert(j);
        } else if(query == 2) {
            cin >> i;
            /*
            while(!box[i].empty()) {
                int num = box[i].top();
                copy_box.push(num);
                cout << num << ' ';
                box[i].pop();
            }
            while(!copy_box.empty()) {
                int num = copy_box.front();
                box[i].push(num);
                copy_box.pop();
            }
            */
            sort(box[i].begin(), box[i].end());
            for(int x : box[i]) cout << x << ' ';
            cout << endl;
        } else {
            cin >> i;
            for(int m : sets[i]) {
                cout << m << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}