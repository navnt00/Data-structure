#include<iostream>
using namespace std;
int maxElement(int n, int arr[]){
    int max = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5] = {30, 40, 50, 20, 10};
    int n = 5;
    maxElement(n, arr);
    cout << "The Maximum Element is ->" << maxElement(n , arr) << endl;
    return 0;
}