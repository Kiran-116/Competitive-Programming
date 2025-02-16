#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<int>> arr(H, vector<int>(W));
    for (int i = 0 ; i < H ; i++) {
        for (int j = 0 ; j < W ; j++) {
            cin >> arr[i][j];
        }
    }

    string s(W, '.');

    vector<string> ans(H, s);
    for (int i = 0 ; i < H ; i++) {
        for (int j = 0 ; j < W ; j++) {
            if (arr[i][j] != 0) {
                ans[i][j] = 'A' + arr[i][j] - 1;
            }
        }
    }

    for (auto it: ans) {
        cout << it << endl;
    }
}
// Time -> O(H*W)
// Space -> O(H*W)
