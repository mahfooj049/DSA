#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
 int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    long long sum = 1LL * n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        sum = sum - nums[i];
    }
    return sum;
}
};
int main(){
    Solution sol;
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter array Element : ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    } 
    cout<<"Missing Number : "<<sol.missingNumber(nums)<<endl;
    return 0;
}
 /// m2
    //      int n = nums.size();
    //      for(int i=0;i<=n;i++){
    //         bool flag = false;
    //         // false means i isn't present in array
    //         for(int ele : nums){
    //             if(ele == i){
    //             flag = true;
    //             break;
    //         }
    //      }
    //      if(flag == false) return i;
    // }
    // return 35235;  // TC o(n^2)
