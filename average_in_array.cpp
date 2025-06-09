#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    average = (float)sum / n; // Calculate average
    cout << "Average = " << average << endl;
    return 0;
}
