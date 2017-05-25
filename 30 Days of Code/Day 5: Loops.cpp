#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    for (int i = 1; i < 11; i++)
    {
        std::cout << x << " x " << i << " = " << x * i << std::endl;
    }
    return 0;
}
