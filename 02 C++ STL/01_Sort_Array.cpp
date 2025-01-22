#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> v(n, 0);
    long long arr[100001] = {0};
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i];
        arr[v[i]]++;
    }

    for (int i = 0 ; i <= 100000 ; i++) {
        while (arr[i] > 0) {
            cout << i << " ";
            arr[i]--;
        }
    }
}