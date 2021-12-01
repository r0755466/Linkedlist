#include "student.h"

// Scope resolution
Student::Student(void) : Student("uknown")
{
}

Student::Student(std::string name)
{
    this->name = name;
}

std::string Student::to_string(void)
{

    return name;
}
