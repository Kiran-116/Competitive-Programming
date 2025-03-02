#include <bits/stdc++.h>
using namespace std;

void baseConversion(int N) {
    if (N == 0) {
        return;
    }

    baseConversion(N / 2);
    cout << N % 2;
}

void solve() {
    int N;
    cin >> N;

    baseConversion(N);
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}
// Time -> O(T * logN)
// Space -> O(logN)