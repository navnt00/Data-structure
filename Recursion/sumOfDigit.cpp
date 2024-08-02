#include<iostream>
using namespace std;
int sumOfDigits(int n){
    if(n <= 1){
        return 1;
    }
    return (n % 10 + sumOfDigits(n / 10));
}
int main(){
    int n = 1234589054;
    cout << sumOfDigits(n);
    return 0;
}