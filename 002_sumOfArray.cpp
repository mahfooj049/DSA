#include<iostream> 
using namespace std;
int main(){
    int arr[] = {33, 33 ,55, 55 , 99};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0; i<=n-1; i++){
    sum += arr[i];
}
cout<<sum;
}
