#include <iostream>
using namespace std;

int main() {
    int x = 1;
    for (int i = 1; i <= 16; i += i) {
        x += x;
    }
    cout << x;
}