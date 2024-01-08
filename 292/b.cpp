#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    int event, x, cards[n+1];
    rep(i, n+1) cards[i] = 0;
    rep(i, q) {
        cin >> event >> x;
        switch (event) {
            case 1:
                cards[x]++;
                break;
            case 2:
                cards[x] += 2;
                break;
            case 3:
                if(cards[x] >= 2) cout << "Yes" << endl;
                else cout << "No" << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}