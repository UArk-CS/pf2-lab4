//
// Created by Benjamin Worthington on 2/7/21.
//

#ifndef PF2_LAB4_STUDENTNODE_H
#define PF2_LAB4_STUDENTNODE_H

#include <iostream>
using namespace std;

class StudentNode
{
public:
    // Constructors
    StudentNode();
    StudentNode(string name_, string address_, float gpa_, StudentNode *Next_);
    StudentNode(const StudentNode &student);
    ~StudentNode();

    // Methods
    string getName() const;
    string getAddress() const;
    StudentNode *getNext() const;
    float getGPA() const;
    void setName(string name_);
    void setAddress(string address_);
    void setGPA(float gpa_);
    void setNext(StudentNode *next);
    void print() const;

private:
    string Name;
    string Address;
    float GPA;
    StudentNode *Next;
};

#endif //PF2_LAB4_STUDENTNODE_H
