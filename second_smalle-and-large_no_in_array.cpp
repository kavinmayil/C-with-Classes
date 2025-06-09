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

    sort(arr, arr + n); // Sort the array

    int smallest = arr[0];
    int secondSmallest = -1;

    // Find second smallest
    for(int i = 1; i < n; i++) {
        if(arr[i] != smallest) {
            secondSmallest = arr[i];
            break;
        }
    }

    int largest = arr[n-1];
    int secondLargest = -1;

    // Find second largest
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] != largest) {
            secondLargest = arr[i];
            break;
        }
    }

    if(secondSmallest == -1)
        cout << "No second smallest element.\n";
    else
        cout << "Second smallest: " << secondSmallest << endl;

    if(secondLargest == -1)
        cout << "No second largest element.\n";
    else
        cout << "Second largest: " << secondLargest << endl;

    return 0;
}
