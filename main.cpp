#include <iostream>

#include "student.h"
#include "node.h"
#include "linkedlist.h"

int main()
{
    // Make an student:mark(name = "Mark")
    Student mark("Mark");
    Student dennis("dennis");
    Student Rayan("Rayan");

    // Create the nodes
    Node mNode(mark);
    Node dNode(dennis);
    Node rNode(Rayan);

    mNode.next(&dNode);
    dNode.next(&rNode);

    Linkedlist list;

    // Compositie: Opslaan gebeurd op de stack
    list.add_in_front(Student("Jos"));
    list.add_in_front(Student("dam"));
    list.add_in_front(Student("Rommy"));

    std::cout << list.to_string() << std::endl;

    return 0;
}