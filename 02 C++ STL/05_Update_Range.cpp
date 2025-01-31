#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<long long> prefix(n+1, 0);

    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    while (q--) {
        int L, R;
        long long val;
        cin >> L >> R >> val;

        prefix[L-1] += val;
        prefix[R] -= val;
    }

    for (int i = 1 ; i < n ; i++) {
        prefix[i] += prefix[i-1];
    }

    for (int i = 0 ; i < n ; i++) {
        cout << prefix[i] + arr[i] << " ";
    }
    cout << endl;
}