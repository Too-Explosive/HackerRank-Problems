#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    for (int x = a; x <= b; x++)
    {
        switch(x)
        {
            case 1:
                cout << "one";
                cout << endl;
                break;
            case 2:
                cout << "two";
                cout << endl;
                break;
            case 3:
                cout << "three";
                cout << endl;
                break;
            case 4:
                cout << "four";
                cout << endl;
                break;
            case 5:
                cout << "five";
                cout << endl;
                break;
            case 6:
                cout << "six";
                cout << endl;
                break;
            case 7:
                cout << "seven";
                cout << endl;
                break;
            case 8:
                cout << "eight";
                cout << endl;
                break;
            case 9:
                cout << "nine";
                cout << endl;
                break;
            default:
                if (x % 2 == 0)
                {
                    cout << "even";
                    cout << endl;
                }
                else
                {
                    cout << "odd";
                    cout << endl;
                }
        }
    }
    return 0;
}
