// vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

}

