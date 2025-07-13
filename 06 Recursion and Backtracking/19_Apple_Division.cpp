#include <bits/stdc++.h>
using namespace std;

// void solve(vector<long long>& arr, int ind, long long l, long long r, long long &mini) {
//     if (ind == arr.size()) {
//         mini = min(mini, abs(l - r));
//         return;
//     }

//     solve(arr, ind+1, l + arr[ind], r, mini);
//     solve(arr, ind+1, l, r + arr[ind], mini);
// }

// Approach - 2: Take, Not Take Pattern:
void solve2(vector<long long>& arr, int ind, long long sum, long long totalSum, int n, long long &mini) {
    if (ind == n) {
        mini = min(mini, abs(sum - (totalSum - sum)));
        return;
    }

    // Include the current element in the left partition
    solve2(arr, ind + 1, sum + arr[ind], totalSum, n, mini); 
    solve2(arr, ind + 1, sum, totalSum, n, mini);
}

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long mini = LLONG_MAX;

    // solve(arr, 0, 0, 0, mini);
    long long totalSum = accumulate(arr.begin(), arr.end(), 0LL);
    solve2(arr, 0, 0, totalSum, arr.size(), mini);

    cout << mini << endl;

    return 0;
}
// Time -> O(2^N)
// Space -> O(N)