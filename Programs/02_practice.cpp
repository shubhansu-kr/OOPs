// Swap two numbers 

#include <iostream>
using namespace std ;

void swap (int &a, int &b) {
    int temp = a ;
    a = b ;
    b = temp ;
}

int main () {
    int a, b;
    cout << "Enter a and b " << endl; 
    cin >> a >> b ;
    cout << "Before swap " << endl; 
    cout << "("<< a << "," << b <<")" << endl; 
    swap(a, b) ;
    cout << "After swap " << endl; 
    cout << "("<< a << "," << b <<")" << endl; 
    cout << endl ;

    float r ;
    cout << "Enter the radius (cm)" << endl ;
    cin >> r ;
    cout << "Area of circle is " << r*r*(3.14) <<" cm^2" << endl;  

    return 0;
}