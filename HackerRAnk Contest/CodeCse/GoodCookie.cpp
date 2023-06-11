///////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

bool is_good_cookie(int n) {
    int count = 0;
    string s = to_string(n);
    for (char c : s) {
        if (c != '0') {
            count++;
        }
        if (count > 1) {
            return false;
        }
    }
    return count == 1;
}

int count_good_cookies(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (is_good_cookie(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << count_good_cookies(n) << endl;
    }
    return 0;
}
