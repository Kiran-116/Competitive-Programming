#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    // Write your code here
    if (n == 1) {
        cout << n;
        return;
    }

    cout << n << " ";
    solve(n-1);
}

int main()
{
    int n;
    cin >> n;

    solve(n);

    return 0;
}
// Time -> O(N)
// Space -> O(N)