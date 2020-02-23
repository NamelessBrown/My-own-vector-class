// vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"

int main()
{
    Nameless::Vector<int> vec(9, 99);

    std::cout << vec.x << ' ' << vec.y << '\n';

}

