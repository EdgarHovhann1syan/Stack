#include "../include/Stack.h"

Stack::Stack() {}
void Stack::push(int value)
{
    _elems.push_back(value);
}

void Stack::pop()
{
    _elems.pop_back();
}

int Stack::top()
{
    return _elems.back();
}

bool Stack::is_empty()
{
    return _elems.empty();
}

std::size_t Stack::get_size()
{
    return _elems.size();
}