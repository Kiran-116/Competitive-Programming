#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        long long row, col;
        cin >> row >> col;

        long long diag = max(row, col);
        long long elem = diag * diag - diag + 1;

        // If Odd:
        if (diag & 1) {
            if (row > col) {
                cout << elem - (row - col) << endl;
            }
            else  {
                cout << elem + (col - row) << endl;
            }
        }
        else {
            if (row > col) {
                cout << elem + (row - col) << endl;
            }
            else {
                cout << elem - (col - row) << endl;
            }
        }
    }
}