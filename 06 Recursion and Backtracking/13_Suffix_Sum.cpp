#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int solve(vector<int> arr, int ind, int m) {
    if (m == 0) {
        return 0;
    }

    return (arr[ind] + solve(arr, ind-1, m-1)) % mod;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    cout << (solve(arr, n-1, m)) % mod << endl;

    return 0;
}
// Time -> O(N)
// Space -> O(N)