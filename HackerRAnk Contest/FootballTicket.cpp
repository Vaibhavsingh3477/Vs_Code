#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> tickets(n);
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    sort(tickets.begin(), tickets.end());

    for (int i = 0; i < m; i++) {
        int budget;
        cin >> budget;

        auto it = upper_bound(tickets.begin(), tickets.end(), budget);
        if (it == tickets.begin()) {
            cout << "-1\n";
        } else {
            cout << *(--it) << "\n";
            tickets.erase(it);
        }
    }

    return 0;
}
