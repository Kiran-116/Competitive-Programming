#include <bits/stdc++.h>
using namespace std;

void findSum(vector<long long> arr, int n, long long &sum) {
    if (n == 0) {
        sum += arr[0];
        return;
    }

    sum += arr[n];

    findSum(arr, n-1, sum);
}

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    long long sum = 0;

    findSum(arr, n-1, sum);

    cout << sum << endl;

    return 0;
}
// Time -> O(N)
// Space -> O(N)