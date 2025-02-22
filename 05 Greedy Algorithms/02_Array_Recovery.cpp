#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> d[i];
    }

    vector<int> arr(n, 0);
    arr[0] = d[0];
    for (int i = 1 ; i < n ; i++) {
        int elem1 = arr[i-1] + d[i];
        int elem2 = arr[i-1] - d[i];

        if (elem1 >= 0 && elem2 >= 0 && elem1 != elem2) {
            cout << -1 << endl;
            return;
        }
        arr[i] = max(elem1, elem2);
    }

    for (auto it: arr) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
// Time: O(n)
// Space: O(n)