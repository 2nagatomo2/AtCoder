 #include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int d[n];
    int ans = 0;
    bool flag;

    rep(i, n) {
        cin >> d[i];
        string month = to_string(i+1);
        for(int j=1; j<=d[i]; j++){
            flag = true;
            string date = month + to_string(j);
            rep(k, date.size()-1) {
                if(date[k] != date[k+1]) {
                        flag = false;
                        break;
                }
            }
            if(flag) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}