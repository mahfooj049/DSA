 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"ENter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";

    for(int i=0; i<=n-1; i++){
        cin>>arr[i];

    }
    // print the negative element of array
    for(int i=0; i<=n-1; i++){
        if(arr[i] < 0) cout<<arr[i]<<" ";
    }
 }