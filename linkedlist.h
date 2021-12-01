#include <string>
#pragma onces

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
    Linkedlist *head = nullptr;
};
