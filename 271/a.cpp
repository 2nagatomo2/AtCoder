#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string bite[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
    string ans = "";
    if(n < 16) ans = "0" + bite[n % 16];
    else ans = bite[(n / 16)] + bite[n % 16];
    cout << ans << endl;
    return 0;
}