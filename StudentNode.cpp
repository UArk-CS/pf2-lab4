//
// Created by Benjamin Worthington on 2/7/21.
//

#include "StudentNode.h"

StudentNode::StudentNode()
{
    Name = "";
    Address = "";
    GPA = 0;
    Next = NULL;
}

StudentNode::StudentNode(string name_, string address_, float gpa_)
{
    Name = name_;
    Address = address_;
    GPA = gpa_;
    Next = NULL;
}

StudentNode::StudentNode(const StudentNode &student)
{
    Name = student.Name;
    Address = student.Address;
    GPA = student.GPA;
    Next = NULL;
}

StudentNode::~StudentNode()
{
}

string StudentNode::getName() const
{
    return Name;
}

string StudentNode::getAddress() const
{
    return Address;
}

float StudentNode::getGPA() const
{
    return GPA;
}

void StudentNode::setName(string name_)
{
    Name = name_;
}

void StudentNode::setAddress(string address_)
{
    Address = address_;
}

void StudentNode::setGPA(float gpa_)
{
    GPA = gpa_;
}

void StudentNode::print() const
{
    cout << "Name: " << Name << "\n"
         << "Address: " << Address << "\n" << "GPA: " << GPA << "\n";
}

StudentNode *StudentNode::getNext() const {
    return Next;
}

void StudentNode::setNext(StudentNode *next) {
    Next = next;
}
