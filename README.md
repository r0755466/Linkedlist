## Linkedlist

Heb een probleem bij de linkedlist.cpp file.
Bij de volgende functies:
Functie 1:

```cpp
std::string Linkedlist::to_string(void){
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


```

Functie 2:
Bij deze functie is er wat meer feedback:
Bij de head:
"a value of type "Linkedlist _" cannot be used to initialize an entity of type "Node _"C/C++(144)"

```cpp

void Linkedlist::add_in_front(Student student){
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
```
