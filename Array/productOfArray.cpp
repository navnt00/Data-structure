#include<iostream>
using namespace std;
int productArray(int a[] , int n){
        int product = 1;
        for (int i = 0; i < n; i++){
            product *= a[i];
        }
        return product;
    }

int main(){
    int n;
    cout << "Enter no of array:";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << productArray(a, n);
}