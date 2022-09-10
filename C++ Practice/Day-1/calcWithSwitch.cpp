#include<iostream>
using namespace std;

int main(){
    
    char methods;
    float num1, num2, add, sub, mul, div;

    cout<< "Enter first number: ";
    cin>> num1;
    cout<<"Enter second number: ";
    cin>> num2;
    cout<< " Please enter the method: ";
    cin>>methods;

    switch(methods){
        case 'a':
            add = num1 + num2;
            cout<< "The sum is " << add << endl;
            break;
        case 's':
            sub = num1 - num2;
            cout<< " The sub is " << sub << endl;
            break;
        case 'm':
            mul = num1 * num2;
            cout<< " The mul is " << mul << endl;
            break;
        case 'd':
            div = num1 / num2;
            cout<< "The div is "<< div << endl;
            break;
    }
}