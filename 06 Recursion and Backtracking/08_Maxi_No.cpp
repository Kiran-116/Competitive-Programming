#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> arr, long long n, long long &maxi) {
    if (n == 0) {
        return max(maxi, arr[0]);
    }

    maxi = max(maxi, arr[n]);

    return solve(arr, n-1, maxi);
}

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    long long maxi = INT_MIN;

    cout << solve(arr, n-1, maxi) << endl;
}
// Time -> O(N)
// Space -> O(N)