#include<iostream>
using namespace std;
int main(){
    int m;
    cout <<  "Enter Row matrix :";
    cin >> m;
    int n;
    cout << "Enter column Number:";
    cin >> n;

    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int j = 0; j < n; j++){
        if(j%2 == 0){
            for (int i = m-1; i >= 0 ; i--){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for (int i = 0; i < m; i++){
                cout << arr[i][j] << " "; //output : 7 4 1 2 5 8 9 6 3
            }
        }
    }
}


