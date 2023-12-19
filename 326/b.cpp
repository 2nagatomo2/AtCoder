#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N;
    cin >> N;
    int num1, num2, num3;
    num1 = N / 100;
    num2 = (N / 10) % 10;
    num3 = N % 10;
    while (num1 * num2 != num3) {
        if(num3 == 9) {
            if(num2 == 9) {
                num1++;
                num2 = 0;
                num3 = 0;
            } else {
                num2++;
                num3 = 0;
            }
        } else {
            num3++;
        }
    }
    int ans = 100 * num1 + 10 * num2 + num3;
    cout << ans << endl;
}