#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 333, 33, 77};
    int n = sizeof(arr) / 4;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
}
