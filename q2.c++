#include <iostream>
using namespace std;

int main() {
    int marks1, marks2, marks3;

    cout << "Enter marks scored by student 1: ";
    cin >> marks1;
    cout << "Enter marks scored by student 2: ";
    cin >> marks2;
    cout << "Enter marks scored by student 3: ";
    cin >> marks3;

    cout << "Average marks scored by the students: " << (marks1 + marks2 + marks3) / 3.0 << endl;
}
