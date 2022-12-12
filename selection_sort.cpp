#include<iostream>
using namespace std;
int main(){
    int n;
    int array[8]={2,8,9,5,6,1};
    for(int i=0 ; i < n-1 ;i++)
    {
        int minindex=i;

        for(int j=i+1;j<n;j++){
            if(array[j]<array[minindex])
            minindex=j;
        }
        swap(array[minindex],array[i]);
    }
    


    return 0;
}