#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int m;
    string s1, s2, s3;
    cin >> m >> s1 >> s2 >> s3;

    vector<vector<int>> vec(3, vector(9, 0));
    rep(i, m) {
        int num1 = int(s1[i]-'0');
        int num2 = int(s2[i]-'0');
        int num3 = int(s3[i]-'0');
        
    }
}