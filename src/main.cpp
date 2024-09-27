#include "../include/Stack.h"
#include <iostream>
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
    return 0;
}