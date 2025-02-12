// https://atcoder.jp/contests/abc206/tasks/abc206_c

#include <bits/stdc++.h>
using namespace std;

long long nC2(long long n) {
    return n * (n - 1) / 2;
}

int main()
{
    long long n;
    cin >> n;

    unordered_map<long long, long long> mp;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    long long total = nC2(n);
    long long invalid = 0;

    for (auto it : mp) {
        invalid += nC2(it.second);
    }

    cout << total - invalid << endl;
}