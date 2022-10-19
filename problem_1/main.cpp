//
//  main.cpp
//  homework_4
//
//  Created by Alisher Abduvaliev on 19/10/22.
//Write C++ program that allows to take user input five times and calculate the sum of the
//numbers user has entered. Use while loop.
//Abduvaliyev Alisher 22cs-10 id=220108

#include <iostream>
using namespace std;

int main() {
    int user;
    cout<<"enter 5 numbers :";
    int Usernum = 1;
    int num = 0;
    while (Usernum <= 5) {
        cin>>user;
        num = user + num;
        Usernum++;
    }
    
    cout<<num<<endl;
    
    
    return 0;
}
