//
// Created by Benjamin Worthington on 2/7/21.
//

#ifndef PF2_LAB4_STUDENT_H
#define PF2_LAB4_STUDENT_H

#include <iostream>
using namespace std;

class Student
{
public:
    // Constructors
    Student();
    Student(string name_, string address_, float gpa_);
    Student(const Student & student);
    ~Student();

    // Methods
    string getName() const;
    string getAddress() const;
    float getGPA() const;
    void setName(string name_);
    void setAddress(string address_);
    void setGPA(float gpa_);
    void print() const;

private:
    string Name;
    string Address;
    float GPA;
};

#endif //PF2_LAB4_STUDENT_H
