#include <bits/stdc++.h>
using namespace std;

long long lg2(long long n) {
    if (n < 2) {
        return 0;
    }

    return 1 + lg2(n/2);
}

int main()
{
    long long n;
    cin >> n;

    cout << lg2(n) << endl;

    return 0;
}
// Time -> O(logN)
// Space -> O(logN)