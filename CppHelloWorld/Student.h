/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: david.cara
 *
 * Created on February 5, 2016, 1:27 PM
 */

#ifndef STUDENT_H
#define STUDENT_H

class Student {
    //phone
    int telf;
public:
    //constructors
    Student(int);
    Student(const Student& orig);
    //destructor
    virtual ~Student();

    int getTelf() {
        return telf;
    }

    int getEdat() {
        return edat;
    }

    void setEdat(int _edat) {
        edat = _edat;
    }


private:
    int edat = 5;
};

#endif /* STUDENT_H */

