#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> grades(x);
    for (int i = 0; i < x; i++)
    {
        cin >> grades[i];
        if (!(grades[i] < 38))
        {
            if ((grades[i] + 1) % 5 == 0)
                grades[i] = grades[i] + 1;
            if ((grades[i] + 2) % 5 == 0)
                grades[i] = grades[i] + 2;
        }
        cout << grades[i] << endl;
    }
    return 0;
}
