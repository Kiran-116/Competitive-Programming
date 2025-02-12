// Kth Largest Common Divisor:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, K;
    cin >> A >> B >> K;

    long long gcd = __gcd(A, B);
    vector<long long> divisors;
    for (long long i = 1 ; i * i <= gcd ; i++) {
        if (gcd % i == 0) {
            divisors.push_back(i);
            if (i != gcd / i) {
                divisors.push_back(gcd / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    int n = divisors.size();

    cout << divisors[n - K] << endl;
} 
// N = gcd(A, B)
// Time -> O(sqrt(N))
// Space -> O(sqrt(gcd(A, B)))