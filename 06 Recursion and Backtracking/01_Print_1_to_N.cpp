#include <bits/stdc++.h>
using namespace std;

void printNumbers(int N)
{
    if (N == 1) {
        cout << N << endl;
        return;
    }

    printNumbers(N-1);
    cout << N << endl;
}

int main()
{
    int N;
    cin >> N;

    printNumbers(N);

    return 0;
}
// Time -> O(N)
// Space -> O(N)