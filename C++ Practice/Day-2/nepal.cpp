// WAP to create structure flag of Nepal using work nepal.
// But here is the catch you have only 3 tries to solve
// the problem and you are expected with following result.

// N 
// N E 
// N E P
// N E P A
// N E P A L
// N
// N E
// N E P
// N E P A
// N E P A L

// You can use different loops to add flavour to your solution

#include<iostream>
using namespace std;

int main() {

    int i, j;
    string nepal = "NEPAL";
    int mainLoop = 0;

    do{
        for (i = 0; i < nepal.length(); i ++ ){
            for (j = 0; j <= i; j++){
                cout<< nepal[j] << " ";
            }
        cout<<endl;
        }
        mainLoop++;
    }while (mainLoop < 2);
    
}