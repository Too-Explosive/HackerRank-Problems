#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int z;
    cin >> z;
    vector<int> x (z);
    for(int i = 0; i < z; i++)
        cin >> x[i];
    for(int i = z - 1; i >= 0; i--)
        cout << x[i] << ' ';
    return 0;
}
