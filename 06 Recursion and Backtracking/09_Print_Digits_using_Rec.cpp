#include <bits/stdc++.h>
using namespace std;

void printDigits(long long n) {
    if (n == 0) {
        return;
    }

    printDigits(n / 10);
    cout << n % 10 << " ";
}

void solve() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    printDigits(n);
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
// Time -> O(N)
// Space -> O(N)