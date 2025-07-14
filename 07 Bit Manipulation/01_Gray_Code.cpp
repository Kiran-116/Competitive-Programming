#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> grayCode;
    for (int i = 0; i < (1 << n); ++i) {
        grayCode.push_back(i ^ (i >> 1));
    }

    for (int code : grayCode) {
        cout << code << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    solve(n);
    return 0;
}