#include <iostream>
using namespace std;

int main() {
    int arr[100], n, element;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to add at the end: ";
    cin >> element;

    arr[n] = element; 
    n++;             

    cout << "Array after adding:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
