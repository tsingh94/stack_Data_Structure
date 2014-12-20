#include <iostream>
#include "stack.h"
using namespace std;

// push function that adds a new element on top of the stack
template <class T>
void Stack<T>:: push(T i)
{
    this->v.push_back(i);
}

// pop function that takes the last element off the stack 
template <class T>
void Stack<T>:: pop()
{
    if (this->v.size() != 0)
        this->v.pop_back();
}

// size function that returns the size of the stack
template <class T>
unsigned Stack<T>:: size()
{
    return this->v.size();
}

// top function that returns the element on top of the stack
template <class T>
T & Stack<T>:: top()
{
    return this->v.back();
} 

// empty function that returns a 1 if the stack is empty and 0 
// if it is not.
template <class T>
bool Stack<T>:: empty()
{
    if (v.size() == 0)
        return 1;
    else
        return 0;
}

// print function that prints the contents of the stack
template <class T>
void Stack<T>:: print()
{
    for (unsigned i = 0; i < this->v.size(); ++i)
        cout << this->v.at(i) << endl;
}
