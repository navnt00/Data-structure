#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={45,67,89,34,12,43,52,22};
    int n = 8;
    sort(arr,arr + n,greater <int>());
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    

     return 0;
}