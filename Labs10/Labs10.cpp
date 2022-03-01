#include "Triangle.h"
#include "dot.h"
#include <iostream>

int main()
{
    dot h1 = dot(0, 0);
    dot h2 = dot(5, 0);
    dot h3 = dot(3, 3);

    Triangle tr = Triangle(h1, h2, h3);

    std::cout << tr.getPerimetor() << std::endl;
    std::cout << tr.getSideLength(h1, h2) << std::endl;
    std::cout << tr.getSquare() << std::endl;
}