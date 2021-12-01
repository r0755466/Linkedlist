#pragma once
#include <string>
#include "node.h"
#include "student.h"

class Linkedlist
{

public:
    void add_in_front(Student student);

public:
    // +tostring(): string
    std::string to_string(void);

public:
    size_t size(void);

private:
    // head = pointer type object Linkerlist, declare 0
    Linkedlist *head = nullptr;
};
