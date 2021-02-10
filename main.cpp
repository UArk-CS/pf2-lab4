//
// Created by Benjamin Worthington on 2/7/21.
//

#include <iostream>
#include "StudentNode.h"

int main()
{

    StudentNode *ptr1 = new StudentNode("Sam", "Springdale, AR", 2.9);
    StudentNode *ptr2 = new StudentNode("Fred", "Fayetteville, AR", 3.5);
    StudentNode *ptr3 = new StudentNode("John", "Johnson, AR", 2.5);
    StudentNode *ptr4 = new StudentNode("Ben", "Fayetteville, AR", 3.4);
    StudentNode *ptr5 = new StudentNode("Josh", "Fayetteville, AR", 4.0);

    ptr1->setNext(ptr2);
    ptr2->setNext(ptr3);
    ptr3->setNext(ptr4);
    ptr4->setNext(ptr5);
    ptr1->print();

    return 0;

}