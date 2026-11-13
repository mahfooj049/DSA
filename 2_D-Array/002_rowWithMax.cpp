#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{90,1,9,1}};
    int maxSum = 0;
    int maxRow =0;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if(sum>maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << "Row with maximum sum: " << maxRow + 1 << endl;
    cout << "Maximum sum: " << maxSum << endl;
}