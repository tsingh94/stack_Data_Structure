#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T>
class Stack
{
    private:
        vector<T> v; 
       
    public:
        
        // push function that adds a new element on top of the stack
        void push(T i);
        
        // pop function that takes the last element off the stack 
        void pop();
        
        // size function that returns the size of the stack
        unsigned size();
        
        // top function that returns the element on top of the stack
        T & top();
        
        // empty function that returns a 1 if the stack is empty and 0 
        // if it is not.
        bool empty();
        
        // print function that prints the contents of the stack
        void print();
};
#endif
