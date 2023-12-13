#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    int A[N], B[N];
    vector<ll> mathScore;
    vector<ll> englishScore;
    vector<ll> totalScore;
    bool pass[N];

    rep(i, N) {
        cin >> A[i];
        mathScore.push_back((100 - A[i]) * 10000 + i);
        pass[i] = false;
    }
    sort(mathScore.begin(), mathScore.end());
    rep(i, N) {
        cin >> B[i];
    }
    rep(i, X) {
        pass[mathScore[i] % 10000] = true;
    }
    
    rep(i, N) {
        if (!pass[i]) englishScore.push_back((100 - B[i]) * 10000 + i);
    }
    sort(englishScore.begin(), englishScore.end());
    rep(i, Y) {
        pass[englishScore[i] % 10000] = true;
    }

    rep(i, N) {
        if (!pass[i]) {
            totalScore.push_back((200 - A[i] - B[i]) * 10000 + i);
        }
    }
    sort(totalScore.begin(), totalScore.end());
    rep(i, Z) {
        pass[totalScore[i] % 10000] = true;
    }

    rep(i, N) {
        if(pass[i]) {
            cout << i+1 << endl;
        }
    }
    return 0;
}