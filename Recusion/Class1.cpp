#include<iostream>
using namespace std;
int fun(int n){
    if(n == 0)
        return n;
    cout << n << endl;
    fun(n - 1);
    cout << n << endl;
}
int main(){

    fun(3);
    return 0;
}