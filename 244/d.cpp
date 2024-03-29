#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    char S1, S2, S3, T1, T2, T3;
    cin >> S1 >> S2 >> S3 >> T1 >> T2 >> T3;
    int cnt = 0;
    if(S1 == T1) cnt++;
    if(S2 == T2) cnt++;
    if(S3 == T3) cnt++;

    if(cnt == 0 || cnt == 3) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}