#include<iostream>
using namespace std;

int main() {
int chem, phy, math;
cout << "\n ENTER CHEMISTRY MARKS: ";
cin >> chem;
cout << "\n ENTER PHYSICS MARKS: ";
cin >> phy;
cout << "\n ENTER MATHS MARKS: ";
cin >> math;

cout << "\n CHEMISTRY MARKS: " << chem << "\n PHYSICS MARKS: " << phy << "\n MATHS MARKS: " << math << "\n TOTAL MARKS: " << chem + phy + math;
return 0;
}