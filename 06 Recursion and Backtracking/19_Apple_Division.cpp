#include <bits/stdc++.h>
using namespace std;

void solve(vector<long long>& arr, int ind, long long l, long long r, long long &mini) {
    if (ind == arr.size()) {
        mini = min(mini, abs(l - r));
        return;
    }

    solve(arr, ind+1, l + arr[ind], r, mini);
    solve(arr, ind+1, l, r + arr[ind], mini);
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

    solve(arr, 0, 0, 0, mini);

    cout << mini << endl;

    return 0;
}
// Time -> O(2^N)
// Space -> O(N)