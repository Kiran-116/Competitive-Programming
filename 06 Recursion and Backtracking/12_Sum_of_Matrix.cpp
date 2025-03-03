#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int> > &A, vector<vector<int> > &B, int n, int m) {
    if (n == -1) {
        return;
    }

    solve(A, B, n-1, m);
    for (int i = 0 ; i < m ; i++) {
        cout << A[n][i] + B[n][i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int> > A(n, vector<int>(m));
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> A[i][j];
        }
    }

    vector<vector<int> > B(n, vector<int>(m));
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> B[i][j];
        }
    }

    solve(A, B, n-1, m);

    return 0;
}
// Time -> O(N*M)
// Space -> O(N*M)