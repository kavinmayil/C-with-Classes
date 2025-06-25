#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;

    while (n > 0) {
        n -= i;   
        i += 2;   
    }

    if (n == 0) {
        cout << "Perfect Square" << endl;
    } else {
        cout << "Not a Perfect Square" << endl;
    }

    return 0;
}
