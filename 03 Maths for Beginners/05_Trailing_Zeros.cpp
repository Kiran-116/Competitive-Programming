#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long ans = 0;
    long long num = 5;

    while (n / num > 0) {
        ans += n / num;
        n = n / num;
    }

    cout << ans << endl;
}