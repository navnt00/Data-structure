#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 4, 6, 0, 12, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int poz = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] != 0){
            arr[poz] = arr[i];
            poz++;
        }
    }
    for (int i = poz; i < size; i++){
        arr[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}