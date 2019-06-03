#include <iostream>

int main()
{
    int houseL, houseR, appTree, oranTree, appNum, oranNum, currFruit, appCount = 0, oranCount = 0;
    std::cin >> houseL >> houseR >> appTree >> oranTree >> appNum >> oranNum;
    for (int i = 0; i < appNum; i++)
    {
        std::cin >> currFruit;
        if (currFruit + appTree <= houseR && currFruit + appTree >= houseL)
            appCount++;
    }
    for (int i = 0; i < oranNum; i++)
    {
        std::cin >> currFruit;
        if (currFruit + oranTree <= houseR && currFruit + oranTree >= houseL)
            oranCount++;
    }
    std::cout << appCount << '\n' << oranCount;
    return 0;
}
