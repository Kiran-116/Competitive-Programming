#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int count = 0;
    vector<string> arr;
    unordered_set<string> st;

    for (int i = 0 ; i < N ; i++) {
        string str;
        cin >> str;
        arr.push_back(str);
    }
    for (int i = 0 ; i < M ; i++) {
        string str;
        cin >> str;
        st.insert(str);
    }

    for (int i = 0 ; i < N ; i++) {
        string str = arr[i].substr(3, 3);
        if (st.count(str)) {
            count++;
        }
    }

    cout << count << endl;
}
// Time -> O(N + M)
// Space -> O(N) + O(M) -> O(N)