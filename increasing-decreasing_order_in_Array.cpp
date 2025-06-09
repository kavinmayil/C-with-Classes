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
    sort(arr, arr + n);
    cout << "\nArray in Increasing Order:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\nArray in Decreasing Order:\n";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
