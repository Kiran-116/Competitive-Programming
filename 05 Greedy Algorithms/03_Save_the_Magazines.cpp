#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> arr(n);
        for (int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        int sum = 0;
        int ans = 0;
        int mini = INT_MAX;
        int last = 0;
        int start =  0;

        while (start < n && s[start] == '1') {
            ans += arr[start];
            start++;
        }
        for (int i = start ; i < n ; i++) {
            if (s[i] == '0') {
                if (last == 1) {
                    ans += (sum - mini);
                }
                sum = arr[i];
                mini = arr[i];
                last = 0;
            }
            else {
                sum += arr[i];
                mini = min(mini, arr[i]);
                last = 1;
            }
        }
        if (last == 1) {
            ans += (sum - mini);
        }

        cout << ans << endl;
    }

}
// Time: O(N)
// Space: O(1)