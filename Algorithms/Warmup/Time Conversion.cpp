#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time, x, y;
    int a;
    cin >> time;
    if (time.substr(8, 2) == "AM")
    {
        if(time.substr(0, 2) == "12")
        {
            cout << "00" << time.substr(2, 6);
        }
        else
        {
            cout << time.substr(0, 8);
        }
    }
    else
    {
        a = stoi(time.substr(0, 2), nullptr);
        if (a != 12)
        {
            y = to_string(12 + a) += time.substr(2, 6);
            cout << y;
        }
        else
        {
            y = to_string(12) += time.substr(2, 6);
            cout << y;
        }
    }
    return 0;
}
