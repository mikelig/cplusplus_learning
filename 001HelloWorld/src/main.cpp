#include <iostream>

int main()
{
    int var1 = 100; 
    int *ptr_var1 = &var1;
    int **pptr_var1 = &ptr_var1;
    // std stand for "Standard Library" and `cout` means "character out" wich is used to print sth in screen
    // by doing `std::` we can access pany method of standard library
    //std::cout << "Hello World!"; 

    std::cout << var1;
    std::cout << "END";

    // wait user to press enter to close the terminal:
    // std::cin.get();

    
    return 0;
}