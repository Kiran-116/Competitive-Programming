#include <bits/stdc++.h>
using namespace std;

void solveRec(int n, int space) {
    if (n == 0) {
        return;
    }

    for (int i = 0 ; i < space ; i++) {
        cout << " ";
    }
    for (int i = 0 ; i < 2 * n - 1 ; i++) {
        cout << "*";
    }
    cout << endl;

    solveRec(n-1, space+1);
}

void solve(int n) {
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < i ; j++) {
            cout << " ";
        }
        for (int j = 0 ; j < 2 * (n - i) - 1 ; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    // solve(n);
    solveRec(n, 0);
}
// Time -> O(N^2)
// Space -> O(N)