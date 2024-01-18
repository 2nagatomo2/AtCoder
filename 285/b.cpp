#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, l, cnt;
    string s;
    cin >> n >> s;
    for(int i=1; i<=n-1; i++) {
        cnt = 0;
        l = n - i;
        for(int k=1; k<=l; k++) {
            if(s[k-1] != s[k+i-1]) cnt++;
            else break;
        }
        cout << cnt << endl;
    }   
    return 0;
}