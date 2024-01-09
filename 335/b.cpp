#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    
    for(int x = 0; x <= n; x++) {
        for(int y = 0; y <= n; y++){
            if(x + y > n) break;
            for(int z = 0; z <= n; z++) {
                if(x + y + z > n) break;
                cout << x << ' ' << y << ' ' << z << endl;
            }
        }
    }
    return 0;
}