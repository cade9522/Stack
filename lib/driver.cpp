#include "Stack.hpp"
#include <iostream>


int main() {
    //create Stack
    Stack stack;

    //check if Stack is empty
    std::cout << stack.isEmpty() << std::endl;

    //push values onto Stack
    stack.push(4);
    stack.push(5);
    stack.push(43);

    //create copy Stack
    Stack stacks = stack;

    //push values onto copy Stack
    stacks.push(100);
    stacks.push(102);

    //push value onto Stack
    stack.push(34);

    //check top value of each Stack
    std::cout << stack.peek() << std::endl;
    std::cout << stacks.peek() << std::endl;

    //remove values from original Stack
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    //check if either Stack is empty
    std::cout << stack.isEmpty() << std::endl;
    std::cout << stacks.isEmpty() << std::endl;
    return 0;
}