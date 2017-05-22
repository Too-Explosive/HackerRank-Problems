#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    float p = 0, g = 0, z = 0, t = n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if (arr[arr_i] < 0)
       {
           g++;
       }
       else if(arr[arr_i] > 0)
       {
           p++;
       }
       else
       {
           z++;
       }
    }
    cout << p / t << endl << g / t << endl << z / t;
    return 0;
}
