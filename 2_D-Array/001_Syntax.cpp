#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 9, 1}};
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i][j] << "  ";
            sum += arr[i][j];
        }
        cout << endl;
    }
    cout << "Sum of all elements: " << sum << endl;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,1,9,1}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
// }

// Tranpose of 2-D array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 9, 1}};
//     for (int j = 0; j < 4; j++)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             cout << arr[i][j] << "  ";
//         }
//         cout << endl;
//     }
// }
