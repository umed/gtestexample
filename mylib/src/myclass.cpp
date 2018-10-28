#include "myclass.h"

MyClass::MyClass(int data) : data(data)
{
}

std::string MyClass::toString()
{
    return std::to_string(this->data);
}