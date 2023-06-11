#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int modifyMex(int n, vector<int> &a) {
    sort(a.begin(), a.end());
    int mex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mex) {
            mex++;
        }
    }
    return mex;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = modifyMex(n, a);
        cout << result << endl;
    }

    return 0;
}
