#pragma onces

#include <string>

class Student
{

public:
    Student(void);             // default
    Student(std::string name); // constructor overloading
    std::string to_string(void);
    // Attributes
private:
    // We use underscore when it is a private variable
    std::string name = "name";
};
