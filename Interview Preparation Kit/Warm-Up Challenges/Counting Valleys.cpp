#include <iostream>

int main()
{
    int n, height = 0, valleys = 0;
    char step;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> step;
        if (step == 'U')
            height++;
        else if (height == 0)
        {
            valleys++;
            height--;
        }
        else
            height--;
    }
    std::cout << valleys;
    return 0;
}
