#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long X)
{
    if (X <= 1) {
        return false;
    }

    for (long long i = 2 ; i * i <= X ; i++) {
        if (X % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    long long X;
    cin >> X;

    while (!isPrime(X)) {
        X++;
    }

    cout << X << endl;
}
// Time -> O(N + sqrt(N))
// Space -> O(1)