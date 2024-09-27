#ifndef STACK_H
#define STACK_H
#include <list>
class Stack
{
public:
    Stack();
    void push(int value);
    void pop();
    int top();
    bool is_empty();
    std::size_t get_size();
private:
    std::list<int> _elems;
};
#endif // STACK_H