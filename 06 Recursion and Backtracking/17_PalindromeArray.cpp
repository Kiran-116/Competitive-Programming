#include <bits/stdc++.h>
using namespace std;

bool isPlalindrome(vector<long long> &arr, int low, int high) {
    if (low > high) {
        return true;
    }
    if (arr[low] != arr[high]) {
        return false;
    }

    return true && isPlalindrome(arr, low+1, high-1);
}

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isPlalindrome(arr, 0, n-1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
// Time -> O(N)
// Space -> O(N)