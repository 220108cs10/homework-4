//
//  main.cpp
//  homework-1
//
//  Created by Alisher Abduvaliev on 19/10/22.
//Write C++ program that takes the integer number from user and calculates factorial of the
//given number.
// Abduvaliyev Alisher 22cs-10 id = 220108
//

#include <iostream>
using namespace std;

int main() {
    int number;
    long fact = 1;
    cout<<"Enter number : ";
    cin>> number;
    
    
    if(number < 0) {
        cout<<"Eror :";
    } else {
        for(int i = 1; i <= number; ++i){
            fact *= i;
        }
        cout<<"All "<< number<< " = "<< fact<<endl;
    }
    
    
    return 0;
}
