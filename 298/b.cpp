#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

vector<vector<int> > rotate(vector<vector<int> > a) {
    int n = a.size();
    vector<vector<int> > a_rotated(n, vector<int>(n));
    rep(i, n) {
        rep(j, n) {
            a_rotated[i][j] = a[n-j-1][i];
        }
    }
    return a_rotated;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n)), b(n, vector<int>(n));
    int sum = 0;
    rep(i, n) rep(j, n) {
        cin >> a[i][j];
        sum += a[i][j];
    }
    rep(i, n) rep(j, n) cin >> b[i][j];

    int check;
    int i = 0;
    
    rep(_, 4){
        check = 0;
        rep(i, n) rep(j, n) {
            check += a[i][j] && b[i][j];
        }
        if(sum == check) {
            cout << "Yes" << endl;
            exit(0);
        } else {
            i++;
            a = rotate(a);
        }
    }

    cout << "No" << endl;
    return 0;
}