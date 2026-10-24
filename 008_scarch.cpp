#include<iostream> 
using namespace std;
int main(){
    int arr[] = {12, 333, 66, -33, -77};
    int n = sizeof(arr)/4;
  int target = 12;
  bool flag = false; // false means not present 
    for(int i=0; i<=n-1; i++){
        if(arr[i] == target){
        flag = true; // true means present
        break;
        }
    }
   
    if(flag == true) cout<<"Element Found"<<endl;
    else cout<<"Element Not Found"<<endl;
        }  



