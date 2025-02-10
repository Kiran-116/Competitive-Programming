#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    int prev = 0;
    long long ans = 0;

    for (long long i = 0 ; i < n ; i++) {
        cin >> arr[i];
        if (arr[i] < prev) {
            ans += prev - arr[i];
            arr[i] = prev;
        }
        prev = arr[i];
    }

    cout << ans << endl;
}