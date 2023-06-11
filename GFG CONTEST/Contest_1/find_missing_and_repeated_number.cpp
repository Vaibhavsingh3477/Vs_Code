#include <iostream>
#include <cmath>
using namespace std;

void findMissingAndRepeated(int Arr[], int N) {
    int sum = 0, sumSq = 0, sumX = 0, sumY = 0;
    for (int i = 0; i < N; i++) {
        sum += Arr[i];
        sumSq += Arr[i] * Arr[i];
        sumX += (i+1);  // Sum of 1 to N
        sumY += Arr[i];
    }
    int diff = sumX - sum;
    int sumDiff = sumSq - diff * diff;
    int sumXY = sumY - diff;
    int x = (sumXY + sqrt(sumXY * sumXY - 4 * sumDiff)) / 2;
    int y = sumY - sumX + x;
    cout << y << " " << x << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        findMissingAndRepeated(Arr, N);
    }
    return 0;
}
