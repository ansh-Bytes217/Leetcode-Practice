#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(vector<int> &arr, int n) {
   

    int largest = arr[n - 1];  // Assuming array is sorted in increasing order
    int second = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            second = arr[i];
            break;
        }
    }

    return second;
}

int main() {
    vector<int> arr = {1, 3, 5, 5, 5, 4, 2};  // You can sort or input as needed
    int n = arr.size();

    
    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != -1)
        cout << "Second largest element: " << secondLargest << endl;
    else
        cout << "Second largest does not exist (all elements are equal or only one element)." << endl;

    return 0;
}
