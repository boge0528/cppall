#include <iostream>

int main()
{
    int sum;

    int num = 50;
    while (1)
    {

        sum += num;
        if (num > 100)
        {
            break;
        }
        num += 1;
    }
    std::cout << "sum: " << sum << std::endl;
}