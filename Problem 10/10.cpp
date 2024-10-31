#include <bits/stdc++.h>
using namespace std;

long long suma_primos(int limit) {
    vector<bool> is_prime(limit + 1, true);
    long long suma = 0;

    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            suma += i;

            // Marcar todos los múltiplos de i como no primos
            for (int j = 2 * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return suma;
}

int main() {
    int limit = 2 * 1e6;
    long long suma = suma_primos(limit - 1);

    cout << suma << endl;

    return 0;
}

// esta wea no la hice yo xd