#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    char s1 = s[0], s2 = s[1], t1 = t[0], t2 = t[1];
    int s1s2 = min(abs(int(s1)-int(s2)), 5 - abs(int(s1)-int(s2)));
    int t1t2 = min(abs(int(t1)-int(t2)), 5 - abs(int(t1)-int(t2)));
    if (s1s2 == t1t2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}