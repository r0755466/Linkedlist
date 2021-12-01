#include "linkedlist.h"

void Linkedlist::add_in_front(Student student)
{
    // If the method is done, it is out of scope, we gone
    //  it is saved on the stack (local)
    // We work with alloc memory to refer to an obj outside scope.
    // Node node(student);

    // We want to save the object student in the heap
    // Declare pointer node type Node object is convert to new Node(student)
    Node *node = new Node(student);

    // if not head
    if (!head)
    {
        // node pointer type object Node is saved in the heap
        head = node;
    }

    else
    {
        node->next(head);
        head = node;
    }
}

size_t Linkedlist::size(void)
{
    // size_t type is a base unsigned integer type

    return 0;
}

std::string Linkedlist::to_string(void)
{
    // if not head
    if (!head)
        return "Linked List is empty";

    std::string output = "";

    // Make a pointer node Type Object Node to head = pointer to obj Linkedlist
    Node *node = head;

    while (node) // while we recive a node
    {
        // Never call method on nullptr
        output += node->to_string() + ""; // Output node
        node = node->next();              // Jump to next node
    }

    return output;
}
