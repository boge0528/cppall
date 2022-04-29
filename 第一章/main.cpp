// #include <stdio.h>

// int main(){
//     return -1;
// }

#include <iostream>

int main()
{
    // std::endl，操作符，结束当前行，刷新缓冲区
    std::cout << "Enter two numbers:" << std::endl;
    /*
    /* */
    */

    int v1 = 0;
    int v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
    << " and " << v2;
    << " is " << v1 + v2 << std::endl;

    return 0;
}