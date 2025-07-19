#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, X;
    cin >> N >> X;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    vector<int> prefix(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    int bounce = 1;
    for (int i = 1 ; i <= N ; i++) {
        if (prefix[i] > X) {
            break;
        }
        bounce++;
    }

    cout << bounce << endl;
}

int main()
{
    solve();
    return 0;
}