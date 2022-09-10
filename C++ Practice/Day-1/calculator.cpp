#include<iostream>
using namespace std;

int main(){

float num1, num2, sum, mul, sub, div;

cout<< " Enter first number : ";
cin>> num1;
cout<< "Enter second number: ";
cin>> num2;

sum = num1 + num2;
mul = num1 * num2;
sub = num1 - num2;
div = num1 / num2;

cout<< "The sum is " <<  sum << endl;
cout<< " The multiplication is " << mul << endl;
cout<< " The subtraction is " << sub << endl;
cout<< " The division is " << div<< endl;


}