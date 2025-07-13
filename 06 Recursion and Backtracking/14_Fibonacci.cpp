#include <bits/stdc++.h>
using namespace std;

long long Fibo(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    return Fibo(n-1) + Fibo(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << Fibo(n) << endl;

    return 0;
}
// Time -> O(2^N)
// Space -> O(N)