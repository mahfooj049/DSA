#include <iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void segregate0and1(vector<int> &arr){
        int i=0,j=arr.size()-1;
        while(i<j){
            if(arr[i]==0) i++;
            else if(arr[j] == 1) j--;
            else if(arr[i] == 1 && arr[j] == 0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array Element : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    sol.segregate0and1(arr);
    cout<<"Segregate Array:  ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
