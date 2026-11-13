#include<iostream>
#include<vector>
using namespace std;
// void change(vector<int> v){ // pass by value
//     v[2] = 99;
// }

void change(vector<int>& v){ // pass by referance
    v[2] = 99;
}
int main(){
    vector<int> v = {9, 5, 4, 3, 7,6};
    change(v);
    cout<<v[2]<<endl;
}