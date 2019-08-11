#include <iostream>

main()
{
    int n = 14;
    std::cout << "Not a pointer: " << n << std::endl;

    std::cout << "Where is it saved? " << &n << std::endl;

    int *p = &n;
    std::cout << "A pointer: " << p << std::endl;

    std::cout << "Value of a thing p points to: " << *p << std::endl;
}