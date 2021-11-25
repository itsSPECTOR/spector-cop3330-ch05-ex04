/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Spector Reese
*/
#include <string>
#include <iostream>
using namespace std;

int main() {

    cout << "Define an operation (Ex: 2 + 2): ";
    
    int inputOne = 0, inputTwo = 0;
    char symbol = 0;
    cin >> inputOne >> symbol >> inputTwo ;
    
        
    if (inputOne > 9){
        cout << "Inputs can't be double digit.\n";
        return 0;
    }
    
    else if (inputTwo > 9){
        cout << "Inputs can't be double digit.\n";
        return 0;
    }
    

    switch (symbol) {
            
        //addition
        case '+':
            cout << inputOne << " + " << inputTwo << " = " 
            << (inputOne + inputTwo) << ".";
            return 0;
            
        //subtraction
        case '-':
            cout << inputOne << " - " << inputTwo << " = " 
            << (inputOne - inputTwo) << ".";
            break;
            
        //multiplication
        case '*':
            cout << inputOne << " * " << inputTwo << " = " 
            << (inputOne * inputTwo) << ".";
            break;
            
        //division
        case '/':
            cout << inputOne << " / " << inputTwo << " = " 
            << (double (inputOne) / inputTwo) << ".";
            break;
            
        //default
        default:
            cout << "Incorrect Input\n";
            break;
    }
    
    //return
    return 0;  
}
