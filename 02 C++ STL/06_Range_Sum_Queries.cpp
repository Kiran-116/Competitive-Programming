#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<long long> arr(N);
    vector<long long> prefixSum(N+1, 0);

    for (int i = 0 ; i < N ; i++) {
        cin >> arr[i];
        prefixSum[i+1] = prefixSum[i] + arr[i];
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        cout << prefixSum[R] - prefixSum[L-1] << endl;
    }
}