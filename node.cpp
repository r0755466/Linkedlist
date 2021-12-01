#include "node.h"

Node::Node(Student data)
{
    this->data(data);
}

void Node::next(Node *next)
{
    _next = next;

} // setter
Node *Node::next(void)
{
}
// getter

void Node::data(Student data)
{
    _data = data;
}
// setter
Student Node::data(void)
{
    return _data;
}

std::string Node::to_string(void)
{
    return _data.to_string();
}
