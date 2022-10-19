//
//  main.cpp
//  problem_2
//
//  Created by Alisher Abduvaliev on 19/10/22.
//Write C++ program to print EVEN values from 0 to N using a for loop. N should be a user
//input.
//Abduvaliyev Alisher 22cs-10 id=220108

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout<<"enter number : ";
    cin>>number;
    for ( int i = 0; i <= number; i = i + 2) {
        cout<<i<<endl;
    }
    
    
    
    return 0;
}
