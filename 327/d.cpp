#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

void dfs(int pos, int x, vector<vector<int> >& g) {
    
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    vector<vector<int> > g(n);
    rep(i, m) {
        cin >> a[i] >>b[i];
        a[i]--; b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    vector<int> x(n, -1);
    rep(i, n) {
        if(x[i] == -1) dfs(i, 0, g);
    }
}