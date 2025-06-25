#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Student {
    string name;
    int age;
    string department;
};

void printLine() {
    cout << "+-----------------+----------+--------------------+" << endl;
}

void printHeader() {
    printLine();
    cout << "| " << left << setw(16) << "Name"
         << "| " << setw(8) << "Age"
         << "| " << setw(19) << "Department" << "|" << endl;
    printLine();
}

void printRow(const Student& s) {
    cout << "| " << left << setw(16) << s.name
         << "| " << setw(8) << s.age
         << "| " << setw(19) << s.department << "|" << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);

    // Input data from user
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> ws;
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Department: ";
        cin >> ws;
        getline(cin, students[i].department);
    }

    // Display table
    cout << "\nStudent Table:\n";
    printHeader();
    for (const auto& s : students) {
        printRow(s);
    }
    printLine();

    return 0;
}
