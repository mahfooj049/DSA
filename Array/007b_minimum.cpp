#include<iostream> 
using namespace std;
int main(){
    int arr[] = {12, 333, 33, 77};
    int n = sizeof(arr)/4;
   int  min= arr[0];
    for(int i=0; i<=n-1; i++){
        if(arr[i]<min) min = arr[i];  
}
cout<<min;
}
