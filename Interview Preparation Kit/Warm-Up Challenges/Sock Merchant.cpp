#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int* socks;
    int len, pairs = 0;
    std::cin >> len;
    socks = new int [len];
    for (int j = 0; j < len; j++)
        std::cin >> socks[j];
    std::vector<int> colors;
    for (int i = 0; i < len; i++)
    {
        if (std::count(colors.begin(), colors.end(), socks[i]) == 0)
            colors.push_back(socks[i]);
    }
    for (int color : colors)
        pairs += std::count(socks, socks + len, color) / 2;
    std::cout << pairs;
    return 0;
}
