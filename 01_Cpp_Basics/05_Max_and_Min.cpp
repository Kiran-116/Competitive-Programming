#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int mini = A;
    int maxi = A;
    mini = min(mini, min(B, C));
    maxi = max(maxi, max(B, C));

    cout << mini << " " << maxi << endl;
}