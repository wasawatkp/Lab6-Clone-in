#include<iostream>
using namespace std;

int main(){
    int Number=3;
    int evenNum=0;
    int oddNum=0;
   
    while(Number != 0){

    cout << "Enter an integer: ";
    cin >> Number;

    if(Number != 0 ){
        if(Number%2 == 0 ){evenNum++;}
        else{oddNum++;}

    }
   
    
    
    }
    
    cout << "#Even numbers = " << evenNum;
    cout << "#Odd numbers = " << oddNum;
    return 0;
}
