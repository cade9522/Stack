//
// Author: Christian Evans, modified from skeleton
//         code written by Professor Andrew Hughes
//

#ifndef AFOUR_STACK_H
#define AFOUR_STACK_H

#include <stdexcept>

typedef int Entry;

class DNode {
public:
    Entry value;
    DNode* next;
    DNode* prev;

}; // DNode class

class Stack {

private:
    DNode* _ptr;
    int _size, _newstack;

    // helper function for deleting the stack
    void deleteList(DNode* head);

    // helper function for copying the stack
    void copyList(DNode* head, DNode* og);


public:

    Stack();

    /**
    * Copy constructor:
    *    Create a deep copy of the other Stack
    * @param other - other Stack to copy from.
    */
    Stack(const Stack& other);

    /**
    * Copy assignment operator:
    *    Create a deep copy of the other Stack
    * @param other - other Stack to copy from.
    * @return reference to this.
    */
    Stack& operator=(const Stack& other);

    /**
    * Destructor:
    *    Clean up all memory used.
    */
    ~Stack();

    /**
    * push:
    *    Insert the value to the top of the Stack
    *
    * @param Entry value – value of type Entry to add to Stack.
    */
    void push(const Entry& value);

    /**
    * pop:
    *    Remove the value to the top of the Stack and return a copy.
    *    This function should throw an error if the Stack is empty.
    *
    * @return Entry value – value of type Entry that was removed from Stack
    */
    Entry pop();

    /**
    * peek:
    *    Returns a copy of the value on the top of the Stack
    *    This function should throw an error if the Stack is empty.
    *
    * @return Entry value – value of type Entry that was on top of Stack
    */
    Entry peek() const;

    /**
    * isEmpty:
    *    Returns whether or not the Stack is empty
    *
    * @return true: no values are stored in the Stack
    *         false: one or more values are stored in the Stack
    */
    bool isEmpty() const;

};

#endif //AFOUR_STACK_H
