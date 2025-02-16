#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    vector<int> even;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        }
    }

    for (auto it: even) {
        cout << it << " ";
    }
    cout << endl;
}
// Time -> O(N)
// Space -> O(N)