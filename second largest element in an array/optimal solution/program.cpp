#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n) {
    int largest = a[0];
    int sLargest = -1;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            sLargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > sLargest) {
            sLargest = a[i];
        }
    }

    return sLargest;
}

int secondSmallest(vector<int> &a, int n) {
    int smallest = a[0];
    int sSmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            sSmallest = smallest;
            smallest = a[i];
        } else if (a[i] > smallest && a[i] < sSmallest) {
            sSmallest = a[i];
        }
    }

    return sSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondLargest(a, n);
    int sSmallest = secondSmallest(a, n);

    return {sLargest, sSmallest};
}

int main() {
    vector<int> arr = {4, 2, 9, 1, 5, 6};
    int n = arr.size();

    vector<int> result = getSecondOrderElements(n, arr);
    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0;
}
