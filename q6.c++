# include <iostream>
using namespace std ;

int main () {
    int n ;
    cout << "Enter Number of Employees : " ;
    cin >> n ;

    for ( int i=1 ; i<=n ; i++) {
        float basic_salary , bonus , net ;
        cout << " \n Enter Basic Salary of Employee " << i << " : " ;
        cin >> basic_salary ;

        bonus = basic_salary * 0.12 ;
        net = basic_salary + bonus ;

        cout << " Net Salary of Employee " << i << " is : " << net << endl ;
        

    }
}