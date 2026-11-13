#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverse(vector<int>& arr, int i, int j) {
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
   void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return;
        k = k % n;
        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
    }
};
    int main() {
    Solution sol;
    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter rotation count: ";
    cin >> k;
    sol.rotate(arr, k);
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;   
    return 0;
}
