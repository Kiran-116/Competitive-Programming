// https://atcoder.jp/contests/abc158/tasks/abc158_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, A, B;
    cin >> N >> A >> B;

    long long ans = 0;

    ans += (N / (A + B)) * A;
    ans += min(A, N % (A + B));

    cout << ans << endl;
}

// Time -> O(1)
// Space -> O(1)