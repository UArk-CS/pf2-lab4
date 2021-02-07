//
// Created by Benjamin Worthington on 2/7/21.
//

#include <iostream>
#include "Student.h"

int main()
{

    float *ptr = new float;
    *ptr = 3.14159;
    cout << *ptr << endl;
    cout << endl;

    Student *john = new Student();
    john->setName("John");
    john->setAddress("Johnson, AR");
    john->setGPA(3.2);
    john->print();

    cout << endl;

    Student *fred = new Student(*john);
    fred->setName("Fred");
    fred->setAddress("Bentonville, AR");
    fred->setGPA(4.0);
    fred->print();

    cout << endl;

    cout << "Print using getters" << endl;
    cout << "Name: " << fred->getName() << endl;
    cout << "Address: " << fred->getAddress() << endl;
    cout << "GPA: " << fred->getGPA() << endl;

    return 0;

}