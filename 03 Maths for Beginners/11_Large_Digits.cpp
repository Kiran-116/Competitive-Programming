// https://atcoder.jp/contests/abc187/tasks/abc187_a

#include <bits/stdc++.h>
using namespace std;

int S(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    int A, B;
    cin >> A >> B;

    cout << max(S(A), S(B)) << endl;
}

// Time -> O(log10(n))
// Space -> O(1)