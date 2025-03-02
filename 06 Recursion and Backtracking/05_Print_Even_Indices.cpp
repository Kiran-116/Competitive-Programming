#include <bits/stdc++.h>
using namespace std;

void evenIndices(vector<long long> arr, int n) {
    if (n == 0) {
        cout << arr[0];
        return;
    }

    if (n % 2 == 0) {
        cout << arr[n] << " ";
    }

    evenIndices(arr, n-1);
}

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    evenIndices(arr, n-1);

    return 0;
}