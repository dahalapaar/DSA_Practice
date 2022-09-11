// WAP to print the following

// Pattern A
// 1 * * *
// * 1 * *
// * * 1 *
// * * * 1

// Pattern B
// * * * 1
// * * 1 *
// * 1 * *
// 1 * * *

#include<iostream>
using namespace std;

int main(){

    int row = 4;
    int column = 4;
    int i, j;

    for(i = 0; i< row; i ++){

        for(j = 0; j < column; j ++){

            // Pattern A
            if(i == j){
            cout<< "1";
            }
            else{
                cout<< "*";
            }

            // Pattern B
            // if(row-1 == i+j){
            // cout<< "1";
            // }
            // else{
            //     cout<< "*";
            // }
            
        }
        cout<<endl;
    }

}