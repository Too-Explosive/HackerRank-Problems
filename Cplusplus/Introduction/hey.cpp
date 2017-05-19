#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    cout << x.size() << ' ' << y.size() << endl << x + y << endl;
    char a = y[0];
    y[0] = x[0];
    x[0] = a;
    cout << x << ' ' << y;
    return 0;
}
