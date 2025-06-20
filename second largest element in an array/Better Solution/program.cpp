#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 5, 10, 3, 7, 8};
    int n = arr.size();

    // First pass: find the largest element
    int largest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Second pass: find the second largest
    int secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element: " << secondLargest << endl;

    return 0;
}
