#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

vector<ll> prime_number;

void Sieve_Of_Eratosthenes(ll n)
{
    // Create and initialize a boolean array
    bool primeNumber[n + 1];
    memset(primeNumber, true, sizeof(primeNumber));
    for (ll j = 2; j * j <= n; j++) {
        if (primeNumber[j] == true) {
            // Update all multiples of i as false
            for (ll k = j * j; k <= n; k += j)
                primeNumber[k] = false;
        }
    } 
    for (ll i = 2; i <= n; i++)
        if (primeNumber[i])
            prime_number.push_back(i);
}

ll pow_three(ll x) {
    return x * x * x;
}

ll pow_five(ll x) {
    return x * x * x * x * x;
}

int main() {
    ll n;
    cin >> n;
    Sieve_Of_Eratosthenes(1000000);
    ll ans = 0, a, b, c;
    for(int i = 0; pow_five(prime_number[i]) <= n; i++) {
        a = prime_number[i];
        for(int j = i+1; a * a * pow_three(prime_number[j]) <= n; j++) {
            b = prime_number[j];
            for(int k = j+1; k < prime_number.size(); k++) {
                c = prime_number[k];
                if(a * a * b * c * c > n) break;
                else ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}