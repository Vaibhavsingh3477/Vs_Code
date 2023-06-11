#include <bits/stdc++.h> // header file includes every Standard library

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;

        for (int i = 1; i <= sqrt(n); i++) {
            int j = sqrt(n - i*i);
            if (j*j + i*i == n && j > 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

