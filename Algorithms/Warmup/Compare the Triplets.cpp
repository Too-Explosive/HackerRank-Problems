#include <iostream>

int main()
{
    int A[3], B[3], a = 0, b = 0;
    std::cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];
    for (int i = 0; i < 3; i++)
    {
        if (A[i] > B[i])
            a++;
        else if (A[i] < B[i])
            b++;
    }
    std::cout << a << " " << b;
    return 0;
}
