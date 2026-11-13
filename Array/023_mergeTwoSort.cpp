#include<iostream>
using namespace std;
int main(){
    int a[] = {10,20,40,70,90,100};
    int b[] = {30,50,60,80};
    int n = sizeof(a)/4, m = sizeof(b)/4;
    int c[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]) 
        c[k++] = a[i++];   
        else c[k++] = b[j++];
    }
        while(j<m)
            c[k++] = b[j++];
        while(i<n)
            c[k++] = a[i++];
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}