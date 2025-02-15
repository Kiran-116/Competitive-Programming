#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, K;
    cin >> N >> K;

    vector<pair<long long , long long>> arr(N);
    for (long long i = 0 ; i < N ; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end());

    vector<long long> ans(N, K / N);
    long long left = K % N;
    
    for (long long i = 0 ; i < left ; i++) {
        ans[arr[i].second]++;
    }

    for (auto it: ans) {
        cout << it << endl;
    }
}