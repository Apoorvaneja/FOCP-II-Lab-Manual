# include<iostream>
using namespace std ;

int main () {
    cout << "Enter temperature in Fahrenheit: " ;
    float f ;
    cin >> f ;
    float c = (f - 32) * 5 / 9 ;
    cout << "Temperature in Celsius is: " << c ;    
    return 0 ;
}