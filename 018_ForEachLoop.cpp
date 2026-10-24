#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v = {3,4,6,7,8,};
    // Multiply even numbers by 2, sqquare the odd numbers 
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]%2 == 0) v[i] *= 2;
    //     else v[i] *= v[i];
    // }
    for(int ele : v){
        if(ele*2 == 0) ele *= 2;
        else ele *= ele;
    }
    for(int ele : v) cout<<ele<<" ";
}