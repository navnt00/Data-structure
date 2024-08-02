#include<iostream>
#include<limits.h>
using namespace std;
int countSubsetSum(int arr[] , int n , int sum){
    if(n == 0){
        return sum == 0 ? 1 : 0;
    }
    return countSubsetSum(arr, n - 1, sum) + countSubsetSum(arr, n - 1, sum - arr[n - 1]);
}
int main(){
    int n = 3,  arr[] = {10, 15, 25},  sum = 25;
    cout << countSubsetSum(arr, n, sum);
    return 0;
}