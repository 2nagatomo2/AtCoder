#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, l;
    cin >> n >> l;
    int a;
    int ans = 0;
    rep(i, n) {
        cin >> a;
        if(a >= l) ans++;
    }

    cout << ans << endl;
    
    return 0;
}