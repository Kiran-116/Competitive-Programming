#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> val(2e5 + 5, vector<long long>(32, false));

void prefix() {
    for (int i = 1 ; i <= 2e5 ; i++) {
        string s = bitset<32>(i).to_string();
        vector<long long> temp(32, 0);
        for (int j = 0 ; j < 32 ; j++) {
            temp[j] += (s[j] == '1');
            val[i][j] += val[i-1][j] + temp[j];
        }
    }
}

void solve() {
    long long l, r;
    cin >> l >> r;

    long long total = r - l + 1;
    long long ans = 0;

    for (int i = 0 ; i < 32 ; i++) {
        ans = max(ans, val[r][i] - val[l-1][i]);
    }

    cout << total - ans << endl;
}

int main()
{
    int t;
    cin >> t;

    prefix();

    while (t--) {
        solve();
    }

    return 0;
}