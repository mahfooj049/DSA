#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {3,4,2,66,7};
    sort(v.begin(), v.end());
    for(int ele : v ) cout<<ele<<" ";
}