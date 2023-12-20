#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    bool flag;
    rep(i, n) {
        if(s[i] == '|') cnt++;
        if(s[i] == '*') {
            if(cnt == 1) flag = true;
            else flag = false;
        }
    }
    if(flag) cout << "in" << endl;
    else cout << "out" << endl;

    return 0;
}