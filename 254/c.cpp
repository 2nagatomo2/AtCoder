#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    rep(i, n) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    map<int, map<int, int>> mp_a;
    map<int, map<int, int>> mp_b;
    rep(i, n) {
        mp_a[a[i]][i % k]++;
        mp_b[b[i]][i % k]++;
    }

    // for(auto itr = mp_a.begin(); itr != mp_a.end(); itr++) {
    //     int num = itr->first;
    //     for(auto itr2 = mp_a[num].begin(); itr2 != mp_a[num].end(); itr2++) {
    //         int idx = itr2->first;
    //         cout << num << ' ' << idx << ' ' << mp_a[num][idx] << ' ' << mp_b[num][idx] << endl;
    //     }
    // }

    for(auto itr = mp_a.begin(); itr != mp_a.end(); itr++) {
        int num = itr->first;
        for(auto itr2 = mp_a[num].begin(); itr2 != mp_a[num].end(); itr2++) {
            int idx = itr2->first;
            if(mp_a[num][idx] != mp_b[num][idx]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}