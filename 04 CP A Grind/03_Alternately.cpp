#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string S;
    cin >> S;

    bool alter = true;
    for (int i = 1 ; i < n ; i++) {
        if (S[i] == S[i-1]) {
            alter = false;
            break;
        }
    }

    cout << (alter ? "Yes" : "No") << endl;
}
// Time -> O(N)
// Space -> O(1)