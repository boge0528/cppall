// 不考虑两个数的大小、边界
#include <iostream>

int main()
{
    std::cout << "Please input 2 numbers: " << std::endl;

    int num1;
    int num2;

    std::cin >> num1 >> num2;

    while (num1 <= num2)
    {
        std::cout << num1 << std::endl;
        num1 += 1;
    }
}