// 3n + 1 Sequence

#include <bits/stdc++.h>
using namespace std;

long long solve(int n) {
    if (n == 1) {
        return 1;
    }

    if (n % 2 == 0) {
        return 1 + solve(n/2);
    } else {
        return 1 + solve(3*n + 1);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}
// Time -> O(logN)
// Space -> O(logN)