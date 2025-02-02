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
 
    for (int i = 0 ; i < n ; i++) {
        string name;
        long long salary;
        cin >> name >> salary;
        pair<string, long long> pr;
        pr.first = name;
        pr.second = salary;
 
        arr.push_back(pr);
 
    }
    sort(arr.begin(), arr.end(), cmp);
 
    for (int i = 0 ; i < n ; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}