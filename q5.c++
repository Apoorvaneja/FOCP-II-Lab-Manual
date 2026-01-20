# include <iostream>
using namespace std ;

int main() {
    int a  ;
    int b  ;
    cout << "Enter a = ";
    cin >> a ;
    cout << "Enter b = ";
    cin >> b ;
    cout<< "Before Swap: a =" << a << " , b =" << b << endl ;

    a= a+b;
    b= a-b;
    a= a-b;

    cout << "After Swap: a=" << a << " , b =" <<b<<endl ;
    return 0 ;
}