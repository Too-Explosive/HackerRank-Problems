#include <iostream>

int main()
{
    int arr [6][6], max = (-9 * 7) - 1;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            std::cin >> arr[i][j];
    }
    for (int j = 3; j >= 0; j--)
    {
        for (int i = 5; i > 1; i--)
        {
            if ((arr[j][i] + arr[j][i - 1] + arr[j][i - 2] + arr[j + 1][i - 1] + arr[j + 2][i] + arr[j + 2][i - 1] + arr[j + 2][i - 2]) > max)
                max = arr[j][i] + arr[j][i - 1] + arr[j][i - 2] + arr[j + 1][i - 1] + arr[j + 2][i] + arr[j + 2][i - 1] + arr[j + 2][i - 2];
        }
    }
    std::cout << max;
    return 0;
}
