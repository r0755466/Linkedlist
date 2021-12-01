
#pragma once
#include "student.h"

class Node
{

public:
    // Constructor
    Node(Student data);

    void next(Node *next); // setter
    Node *next(void);      // getter

    void data(Student data); // setter
    Student data(void);

public:
    std::string to_string(void);

    // Atributes
private:
    // Node pointer to next
    Node *_next = nullptr;
    // student
    Student _data;
};