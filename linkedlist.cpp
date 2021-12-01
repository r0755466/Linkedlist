#include "linkedlist.h"
#include "node.h"

void Linkedlist::add_in_front(Student student)
{
    // If the method is done, it is out of scope, we gone
    //  it is saved on the stack (local)
    // We work with alloc memory to refer to an obj outside scope.
    // Node node(student);

    // On the heap. Does not go out scope, saved on heap.
    Node *node = new Node(student);

    if (!head)
        head = node;
    else
    {
        node->next(head);
        head = node;
    }
}

size_t Linkedlist::size(void)
{
    return 0;
}

std::string Linkedlist::to_string(void)
{
    // if not head
    if (!head)
        return "Linked List is empty";

    std::string output = "";

    Node *node = head;

    while (node) // Lazy evaluation!
    {
        // Never call method on nullptr
        output += node->to_string() + ""; // Output node
        node = node->next();              // Jump to next node
    }

    return output;
}
