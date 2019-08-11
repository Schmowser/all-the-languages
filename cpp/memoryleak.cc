#include <iostream>

main()
{
    int i = 0;
    while (true) {
        int *data = new int;
        *data = i;
        std::cout << *data << std::endl;
        ++i;
        delete data;    // Delete this and get a Stack Overflow!
    }
}