#include<iostream>
using namespace std;
void waveArr(int n , int arr[]){
    for (int i = 0; i < n - 1; i = i+2){
        swap(arr[i], arr[i + 1]);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    waveArr(n, arr);
    cout << "The Wave Form is ->";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}