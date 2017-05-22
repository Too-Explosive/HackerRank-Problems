#include <iostream>

int main()
{
    long long x[5], sum = 0, max = 0;
    for (int i = 0; i < 5; i++)
        std::cin >> x[i];
    for (int i = 0; i < 5; i++)
        sum += x[i];
    long long min = sum;
    for (int i = 0; i < 5; i++)
    {
        if (sum - x[i] > max)
            max = sum - x[i];
        if (sum - x[i] < min)
            min = sum - x[i];
    }
    std::cout << min << ' ' << max;
    return 0;
}
