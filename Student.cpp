//
// Created by Benjamin Worthington on 2/7/21.
//

#include "Student.h"

Student::Student()
{
    Name = "";
    Address = "";
    GPA = 0;
}

Student::Student(string name_, string address_, float gpa_)
{
    Name = name_;
    Address = address_;
    GPA = gpa_;
}

Student::Student(const Student &student)
{
    Name = student.Name;
    Address = student.Address;
    GPA = student.GPA;
}

Student::~Student()
{
}

string Student::getName() const
{
    return Name;
}

string Student::getAddress() const
{
    return Address;
}

float Student::getGPA() const
{
    return GPA;
}

void Student::setName(string name_)
{
    Name = name_;
}

void Student::setAddress(string address_)
{
    Address = address_;
}

void Student::setGPA(float gpa_)
{
    GPA = gpa_;
}

void Student::print() const
{
    cout << "Name: " << Name << "\n"
         << "Address: " << Address << "\n" << "GPA: " << GPA << "\n";
}