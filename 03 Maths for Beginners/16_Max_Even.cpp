#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (long long i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    // Even + Even => Even
    // Odd + Odd => Even
    vector<long long> even, odd;
    for (long long i = 0 ; i < n ; i++) {
        if (arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    if (odd.size() == 1 && even.size() == 1) {
        cout << -1 << endl;
    }
    else {
        long long k, m;
        k = odd.size();
        m = even.size();

        long long ans1 = 0, ans2 = 0;
        if (k-2 >= 0) ans1 = odd[k-1] + odd[k-2];
        if (m-2 >= 0) ans2 = even[m-1] + even[m-2];

        cout << max(ans1, ans2) << endl;
    }
}
// Time -> O(NlogN)
// Space -> O(N)