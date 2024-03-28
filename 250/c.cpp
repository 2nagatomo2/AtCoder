#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, q, x;
    cin >> n >> q;
    map<int, int> idxToNum;
    map<int, int> numToIdx;

    rep(i, n) {
        idxToNum[i] = i+1;
        numToIdx[i+1] = i;
    }

    while(q--) {
        cin >> x;
        int num1 = x, num2, idx1 = numToIdx[x], idx2;
        if(idx1 == n-1) {
            idx2 = n-2;
            num2 = idxToNum[n-2];
        } else {
            idx2 = idx1 + 1;
            num2 = idxToNum[idx2];
        }
        idxToNum[idx1] = num2;
        idxToNum[idx2] = num1;
        numToIdx[num1] = idx2;
        numToIdx[num2] = idx1;
    }
    rep(i, n) cout << idxToNum[i] << ' ';
    cout << endl;
    return 0;
}