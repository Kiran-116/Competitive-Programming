#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> arr(N);
    for (int i = 0 ; i < N ; i++) {
        cin >> arr[i];
    }
    int C = A + B;
    for (int i = 0 ; i < N ; i++) {
        if (arr[i] == C) {
            cout << i+1 << endl;
            break;
        }
    }
}
// Time -> O(N)
// Space -> O(1)