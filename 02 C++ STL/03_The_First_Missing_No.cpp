#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> arr(n);
    unordered_map<int, int> mp;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
 
    int ans;
 
    for (int i = -m ; i <= m ; i++) {
        if (mp[i] == 0) {
            ans = i;
            break;
        }
    }
 
    cout << ans << endl;
}