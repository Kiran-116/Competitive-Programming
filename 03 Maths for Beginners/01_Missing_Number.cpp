#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    
    for (long long i = 1 ; i <= n-1 ; i++) {
        long long x;
        cin >> x;
        sum += x;
    }

    int total = n*(n+1)/2;
    cout << total - sum << endl;
}