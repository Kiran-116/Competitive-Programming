#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long D;
    cin >> N >> D;

    vector<long long> T(N);
    for (int i = 0 ; i < N ; i++) {
        cin >> T[i];
    }

    long long ans = -1;
    for (int i = 1 ; i < N ; i++) {
        if (T[i] -T[i-1] <= D) {
            ans = T[i];
            break;
        }
    }

    cout << ans << endl;
}
// Time -> O(N)
// Space -> O(1)