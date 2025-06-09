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
    }int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }cout<<arr[i]<<" - "<<count<<endl;
        count=1;
        }
    }
    return 0;
}
