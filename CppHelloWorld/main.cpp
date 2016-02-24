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

///POLIMORFISM

class CPolygon {
protected:
    int width, height;
public:

    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    virtual int area(void) = 0;
};

class CRectangle : public CPolygon {
public:

    int area(void) {
        return (width * height);
    }
};

class CTriangle : public CPolygon {
public:

    int area(void) {
        return (width * height / 2);
    }
};

///////

template <class T>
class mypair {
    T a, b;
public:

    mypair(T first, T second) {
        a = first;
        b = second;
    }
    T getmax();
};

template <class T>
T mypair<T>::getmax() {
    T retval;
    retval = a > b ? a : b;
    return retval;
}

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
    Student s(6382568);
    Student * sp = &s;
    //the same in other way
    Student * spn = new Student(111111); //new only for pointers
    cout << "\nNew test " << (*spn).getTelf();


    s.setEdat(8);
    cout << "\nEdat " << s.getEdat();
    cout << "\nEdat pointer " << sp->getEdat(); //like *sp.getEdat();
    cout << "\nTelf " << s.getTelf() << "\n";


    /////////////////////

    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i * 2 << ".\n";


    //templates
    mypair <int> myobject(100, 75);
    mypair <double> myobjectDouble(100.5, 100.4);
    cout << myobject.getmax() << "\n";
    cout << myobjectDouble.getmax() << "\n";

    //polimorfism
    CRectangle rect;
    CTriangle trgl;
    CPolygon * ppoly1 = &rect;
    CPolygon * ppoly2 = &trgl;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    cout << "hola"<<ppoly1->area() << endl;
    cout << ppoly2->area() << endl;

    return 0;
}
