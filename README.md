# Stack
**Create a stack and associated functions using a doubly linked list**

---
### Objective
Design a Stack class using a doubly linked list as a basis. Include various
expected member functions such as a deep copy contructor, destructor,
and push/pull/peek methods.

### Files
- [Stack.h](lib/Stack.h), function declarations
- [Stack.cpp](lib/Stack.cpp), function definitions
- [driver.cpp](lib/driver.cpp), main() method

### Defined Functions
**in Stack.h/Stack.cpp*

- **Stack():** General constructor
- **Stack(const Stack& other):** Deep copy constructor
- **Stack& operator=(const Stack& other):** Deep copy assinment operator
- **~Stack():** Destructor, no memory leaks!
- **void push(const Entry& value):** Add value to top of Stack
- **Entry pop():** Remove and return value from top of Stack
- **Entry peek() const:** Return value from top of Stack
- **bool isEmpty() const:** Returns if Stack is empty or not
- **void deleteList(DNode\* head):** Helper function for the destructor
- **void copyList(DNode\* head, DNode\* og):** Helper function for the copy constructor

### Instructions of Use
- To run, open your favorite C++ compiler (I used JetBrains CLion)
- Add all files within the /docs folder
- Modify values and add/remove lines in driver.cpp file to create new scenarios
- Compile, and check out the results in the display console!

---
*Skeleton code and documentation written by Professor Andrew Hughes of the 
SUNY University at Buffalo. For more information, view the detailed
assignment documentation ([A4.pdf](docs/A4.pdf)).*
