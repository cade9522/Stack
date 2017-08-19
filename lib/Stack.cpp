//
// Author: Christian Evans
//

#include "Stack.h"

Stack::Stack(){
    _ptr = new DNode;
    _ptr->next = nullptr;
    _ptr->prev = nullptr;
    _newstack = 1;
    _size = 0;
}

void Stack::deleteList(DNode* head){
    if (head != nullptr){
        DNode* next = head->next;
        delete head;
        this->deleteList(next);
    }
}

void Stack::copyList(DNode* head, DNode* og){
    if(og != nullptr) {
        head->value = og->value;
        og = og->next;
        DNode* prev = head;
        head = new DNode();
        prev->next = head;
        head->prev = prev;
        this->copyList(head, og);
    }
}

Stack::Stack(const Stack& other){
    *this = other;
}


Stack& Stack::operator=(const Stack& other){
    if(this != &other) {
        if (_newstack == 1 && _size != 0) {
            this->deleteList(_ptr);
        }
        _ptr = new DNode;
        _ptr->next = nullptr;
        _ptr->prev = nullptr;
        _size = other._size;
        if (!other.isEmpty()) {
            this->copyList(_ptr, other._ptr);
        }
    }
    return *this;
}


Stack::~Stack(){
    this->deleteList(_ptr);
}


void Stack::push(const Entry& value){
    DNode* temp = new DNode();
    _ptr->prev = temp;
    temp->value = value;
    temp->next = _ptr;
    temp->prev = nullptr;
    _ptr = temp;
    ++_size;
}


Entry Stack::pop(){
    try {
        bool test = this->isEmpty();
        if(test){
            throw (std::runtime_error("Pop called on empty stack."));
        }
    }
    catch (const std::runtime_error& e){
        return false;
    }
    DNode* prev = _ptr;
    _ptr = prev->next;
    --_size;
    Entry e = prev->value;
    _ptr->prev = nullptr;
    delete prev;
    return e;
}


Entry Stack::peek() const{
    try {
        bool test = this->isEmpty();
        if(test){
            throw (std::runtime_error("Peek called on empty stack."));
        }
    }
    catch (const std::runtime_error& e){
        return false;
    }
    return _ptr->value;
}


bool Stack::isEmpty() const {
    return _size == 0;
}
