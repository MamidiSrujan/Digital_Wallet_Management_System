#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, user, bal;
    cin >> N;

    vector<int> funds(N + 1, 0);

    for (int i = 0; i < N; i++) {
        cin >> user >> bal;
        funds[user] = bal;
    }

    int T, amount, from, to;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> from >> to >> amount;
        if (funds[from] >= amount) {
            funds[from] -= amount;
            funds[to] += amount;
            cout << "Success" << endl;
        } else {
            cout << "Failure" << endl;
        }
    }
    cout<<"\n";
    vector<pair<int, int>> userBalances;

    for (int i = 1; i <= N; ++i) {
        userBalances.push_back({i, funds[i]});
    }

    sort(userBalances.begin(), userBalances.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) {
            return b.second > a.second;
        }
        return a.first < b.first;
    });

    for (const auto& p : userBalances) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
