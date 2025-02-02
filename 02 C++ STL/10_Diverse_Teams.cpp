
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
 
    map<long long, long long> mp;
    for (int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        mp[x] = i + 1;
    }
 
    if (mp.size() < k) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        for (auto it: mp) {
            if (k > 0) {
                cout << it.second << " ";
                k--;
            }
        }
        cout << endl;
    }
 
}