#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n, 0));
    arr.push_back(vector<int>(4,-1)); //Adding a new row with 4 columns initialized to -1
    //Output the 2D array
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}