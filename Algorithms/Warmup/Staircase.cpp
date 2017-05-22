#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, x;
    cin >> n;
    x = n;
    n = 0;
    for (int a = 1; a <= x; a++)
    {
        while (n != x - a)
        {
        cout << ' ';
        n++;
        }
        if (n == x - a)
        {
            while (n <= x - 1)
            {
                cout << "#";
                n++;
            }
        }
        cout << endl;
        n = 0;
    }
    return 0;
}
