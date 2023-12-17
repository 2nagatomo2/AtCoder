#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    int ans = 10000000;
    int eggs = 0;
    for(int i=0; i<=n/6+1; i++) {
        for(int j=0; j<=(n-6*i)/8+1; j++) {
            eggs = 6 * i + 8 * j;
            if(n <= eggs) {
                ans = min(ans, s * i + m * j);
            } else {
                if((n-eggs) % 12 == 0) {
                    ans = min(ans, s * i + m * j + l * (n-eggs) / 12);
                } else {
                    ans = min(ans, s * i + m * j + l * ((n-eggs) / 12 + 1));
                }
            }            
        }
    }
    cout << ans << endl;
    return 0;
}