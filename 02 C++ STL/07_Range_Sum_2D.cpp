#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
 
    // N x M:
 
    vector<vector<long long> > arr(n+1, vector<long long> (m+1, 0));
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= m ; j++) {
            cin >> arr[i][j];
        }
    }
 
    vector<vector<long long> > prefixSum(n+1, vector<long long> (m+1, 0));
 
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= m ; j++) {
            prefixSum[i][j] = prefixSum[i][j-1] + prefixSum[i-1][j] + arr[i][j] - prefixSum[i-1][j-1];
        }
    }
 
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
 
        cout << prefixSum[x2][y2] - prefixSum[x1-1][y2] - prefixSum[x2][y1-1] + prefixSum[x1-1][y1-1] << endl;
    }
}