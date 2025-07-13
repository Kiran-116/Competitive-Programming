#include <bits/stdc++.h>
using namespace std;

void solve(string s2, int ind, int count, vector<int> &ans) {
    if (ind == s2.size()) {
        ans.push_back(count);
        return;
    }

    // Include the current character
    if (s2[ind] == '+') {
        solve(s2, ind + 1, count + 1, ans);
    } else if (s2[ind] == '-') {
        solve(s2, ind + 1, count - 1, ans);
    } else {
        solve(s2, ind + 1, count + 1, ans);
        solve(s2, ind + 1, count - 1, ans);
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> ans;

    solve(s2, 0, 0, ans);

    int count = 0;
    for (char ch : s1) {
        if (ch == '+') {
            count++;
        }
        else {
            count--;
        }
    }

    int countTrue = 0;
    for (auto it: ans) {
        if (it == count) {
            countTrue++;
        }
    }

    // cout << (1.0 * countTrue)/(1.0 * ans.size()) << endl;
    cout << fixed << setprecision(12) << (1.0 * countTrue)/(1.0 * ans.size()) << endl;

    return 0;
}