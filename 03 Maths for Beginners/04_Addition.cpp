#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    long long oddCount = 0;

    for (long long i = 0 ; i < n ; i++) {
        cin >> arr[i];
        if (arr[i] & 1) {
            oddCount++;
        }
    }
    
    if (oddCount & 1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}