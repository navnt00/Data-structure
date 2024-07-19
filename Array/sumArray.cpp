#include<iostream>
using namespace std;
int sum(int n, int arr[]){
    int sum = 0;
    for (int i = 0; i < n; i++)
    sum += arr[i];
    return sum;
}
int main(){
    int arr[5] = {4, 6, 7, 2, 9};
    int n = 5;
    cout << "total sum is ->" << sum(n ,arr);
    return 0;
}