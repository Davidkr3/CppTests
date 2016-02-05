/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: david.cara
 *
 * Created on February 5, 2016, 11:24 AM
 */

#include <cstdlib>
#include <iostream>

#include "Student.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //printf("HOLA");        
    //printf("%p", &prova); //pointer
    //printf("%i", prova);
    cout << "\r" << "Hello World!";

    int prova = 9;
    //set the pointer to point prova var memory address
    int * provaPointer = &prova;
    //var
    cout << "\n" << prova;
    //var address
    cout << "\n" << &prova;
    //ERROR
    //cout << "\n" << *prova;
    //prova var address (pointer value)
    cout << "\n" << provaPointer;
    //access to pointer content
    cout << "\n" << *provaPointer;
    //pointer address
    cout << "\n" << &provaPointer;

    //OBJECT
    Student s(638);
    s.setEdat(8);
    cout << "\nEdat " << s.getEdat();
    cout << "\nTelf " << s.getTelf();

    /////////////////////

    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i * 2 << ".\n";

    return 0;
}
