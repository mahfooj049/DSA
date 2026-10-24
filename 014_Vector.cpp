#include<iostream>       // Syntax
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,3);  // index 0 to 4
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(9);  // adds sn element at end
    arr.push_back(8); 
    arr.pop_back();  // removes last element
    arr.push_back(99);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}