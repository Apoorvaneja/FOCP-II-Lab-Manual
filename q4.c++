# include <iostream>
using namespace std ;

int main () {
cout << "Enter item no:" ;
int item_no ;
cin >> item_no ;
cout << "Enter quantity:" ;
int quantity ;
cin >> quantity ;
float price ;
cout << "Enter price:" ;
cin >> price ;
float total = quantity * price ;
cout<< "Discounted price is: " << total * 0.2 << endl ;
float discounted_total = total - (total * 0.2) ;
cout << "Item no: " << item_no << endl ;
cout << "Quantity: " << quantity << endl ;
cout << "Price: " << price << endl ;
cout << "Total cost after discount is: " << discounted_total << endl ;
return 0 ;
}