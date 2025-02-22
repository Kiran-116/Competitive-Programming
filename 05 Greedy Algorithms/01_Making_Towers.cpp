#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> c(n);
        map<int, vector<int> > mp;

        for (int i = 0 ; i < n ; i++) {
            cin >> c[i];
            mp[c[i]].push_back(i);
        }
        vector<int> ans(n, 0);

        for (auto it: mp) {
            int size = 1;
            vector<int> diff = it.second;
            for (int i = 1 ; i < diff.size() ; i++) {
                if ((diff[i] - diff[i-1]) % 2 == 1) {
                    size++;
                }
            }
            ans[it.first-1] = size;
        }
        for (auto it: ans) {
            cout << it << " ";
        }
        cout << endl;
    }
}
// Time: O(n)
// Space: O(n)