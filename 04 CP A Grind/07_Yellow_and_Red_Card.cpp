#include <bits/stdc++.h>
using namespace std;

// {Player, {Yellow, Red}}

int main()
{
    int N, Q;
    cin >> N >> Q;

    map<int, pair<int, int> > mp;

    while (Q--) {
        int a, b;
        cin >> a >> b;

        if (a == 1) {
            mp[b].first++;
        }
        else if (a == 2) {
            mp[b].second++;
        }
        else {
            if (mp[b].first >= 2 || mp[b].second >= 1) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
}
// Time -> O(Q)
// Space -> O(N) + O(Q) -> O(N)