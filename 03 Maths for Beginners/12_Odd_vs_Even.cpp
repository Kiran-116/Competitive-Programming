#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Odd:
        if (n % 2 != 0) {
            cout << "Odd" << endl;
        }
        // Even: More than one 2's:
        else if (n % 4 == 0) {
            cout << "Even" << endl;
        }
        // Even: Only one 2:
        else {
            cout << "Same" << endl;
        }
    }
}
// Time -> O(t)
// Space -> O(1)