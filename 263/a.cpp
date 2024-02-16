#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int cards[5], cnt1 = 0, cnt2 = 0;
    rep(i, 5) {
        cin >> cards[i];
    }
    sort(cards, cards+5);
    rep(i, 5) {
        if(cards[i] == cards[0]) cnt1++;
        if(cards[i] == cards[4]) cnt2++;
    }
    if((cnt1 == 2 && cnt2 == 3) || (cnt1 == 3 && cnt2 == 2)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}