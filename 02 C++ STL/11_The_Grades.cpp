#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, long long> &p1, pair<string, long long> &p2) {
    if (p1.second > p2.second) {
        return true;
    }
    else if (p1.second == p2.second) {
        return p1.first < p2.first;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<string, long long> > arr;
    map<string, vector<int> > mp; 

    for (int i = 0 ; i < n ; i++) {
        string s;
        cin >> s;

        int A, M, S, E;
        cin >> A >> M >> S >> E;
        vector<int> temp;
        temp.push_back(A);
        temp.push_back(M);
        temp.push_back(S);
        temp.push_back(E);
        mp[s] = temp;

        long long sum = A + M + S + E;
        pair<string, long long> pr;
        pr.first = s;
        pr.second = sum;

        arr.push_back(pr);
    } 

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0 ; i < n ; i++) {
        cout << arr[i].first << " " << arr[i].second << " ";
        vector<int> temp = mp[arr[i].first];
        for (int j = 0 ; j < 4 ; j++) {
            cout << temp[j] << " ";
        }
        cout << endl;
    }
}