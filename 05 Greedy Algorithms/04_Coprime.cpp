#include <bits/stdc++.h>
using namespace std;

vector<int> pairs[1001];
int main()
{
    for (int i = 1 ; i <= 1000 ; i++) {
        for (int j = 1 ; j <= 1000 ; j++) {
            if (__gcd(i , j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> id[10001];
        for (int i = 0 ; i < n ; i++) {
            int x;
            cin >> x;
            id[x].push_back(i);
        }

        int ans = -1;

        for (int i = 1 ; i <= 1000 ; i++) {
            for (auto it: pairs[i]) {
                if (!id[it].empty() && !id[it].empty()) {
                    ans = max(ans , id[i].back() + id[it].back());
                }
            }
        }

        cout << ans << endl;
    }
}