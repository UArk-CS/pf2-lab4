//
// Created by Benjamin Worthington on 2/7/21.
//

#include <iostream>
#include "StudentNode.h"

int main()
{

//    StudentNode *ptr1 = new StudentNode("Sam", "Springdale, AR", 2.9);
//    StudentNode *ptr2 = new StudentNode("Fred", "Fayetteville, AR", 3.5);
//    StudentNode *ptr3 = new StudentNode("John", "Johnson, AR", 2.5);
//    StudentNode *ptr4 = new StudentNode("Ben", "Fayetteville, AR", 3.4);
//    StudentNode *ptr5 = new StudentNode("Josh", "Fayetteville, AR", 4.0);

//    ptr1->setNext(ptr2);
//    ptr2->setNext(ptr3);
//    ptr3->setNext(ptr4);
//    ptr4->setNext(ptr5);
//    ptr1->print();

    string name;
    string address;
    float gpa;
    StudentNode *head = NULL;
    for (int i=0; i<5; i++)
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter GPA: ";
        cin >> gpa;

        // ADD HERE
        StudentNode *list = new StudentNode();
        list->setName(name);
        list->setAddress(address);
        list->setGPA(gpa);

        if (head == NULL) {
            head = list;
        } else {
            head->setNext(list);
        }
    }
    head->print();

    return 0;

}