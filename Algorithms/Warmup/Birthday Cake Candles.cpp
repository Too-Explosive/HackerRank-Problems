#include <iostream>

int main()
{
    int n, h, max = 0, count;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> h;
        if (h > max)
        {
            max = h;
            count = 1;
        }
        else if (h == max)
            count++;
    }
    std::cout << count;
    return 0;
}
