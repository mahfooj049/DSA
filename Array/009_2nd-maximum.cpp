#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {12, 333, 33, 77};
    int n = sizeof(arr) / 4;
    int mx = INT_MIN; // fixed
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    int smx = INT_MIN;
    for (int i = 0; i <= n; i++)
    {                                         // TimeComplexcity O(n) 
        if (arr[i] > smx && arr[i] != mx)
            smx = arr[i];
    }
    cout << mx << " " << smx << endl;
} 
