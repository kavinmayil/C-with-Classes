#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Find median
    float median;
    if (n % 2 == 0) {
        // Even number of elements → average of two middle elements
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        // Odd number of elements → middle element
        median = arr[n/2];
    }

    cout << "Median = " << median << endl;
    return 0;
}
