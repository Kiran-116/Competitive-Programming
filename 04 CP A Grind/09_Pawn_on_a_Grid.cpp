#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    int count = 0;
    while (H--) {
        string str;
        cin >> str;

        for (char ch: str) {
            if (ch == '#') {
                count++;
            }
        }
    }

    cout << count << endl;
}
// Time -> O(H)
// Space -> O(1)