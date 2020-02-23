// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"

int main()
{
    Nameless::Vector<int> vec(9, 99);
    Nameless::Vector<int> vec2(10, 10);

    Nameless::Vector<int> vec3 = vec + vec2;

    std::cout << vec.x << ' ' << vec.y << '\n';
    std::cout << vec2.x << ' ' << vec2.y << '\n';
    std::cout << vec3.x << ' ' << vec3.y << '\n';

    Nameless::Vector<int> vec4 = vec3 - vec2;

    std::cout << vec4.x << ' ' << vec4.y << '\n';
    std::cout << vec3.x << ' ' << vec3.y << '\n';

    //Testing if you can do any type + any type. You can't. Good!
    /* Nameless::Vector<double> doubleVec(5.6, 5.4);

    Nameless::Vector<std::string> string("Joe", "Boddy");

    Nameless::Vector<int> free = doubleVec + string; */

    Nameless::Vector<int> vector(5, 5);
    Nameless::Vector<int> vector2(5, 5);

    if (vector == vector2)
    {
        std::cout << "YUSSSSSSSSS! " << '\n';
    }

    if (vector == vec)
    {
        std::cout << "YUSSSSSSSSS! " << '\n';
    }
    else
    {
        std::cout << "NOOOOOOOOOOOO! " << '\n';
    }

}

