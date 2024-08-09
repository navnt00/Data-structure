#include<iostream>
using namespace std;
int main(){
    int m;
    cout << "Enter The Row Number";
    cin >> m;
    int n;
    cout << "Enter The Column Number";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i <= m - 1; i++){
        for (int j = 0; j <= n - 1; j++){
            cin >> arr[i][j];
        }
    }
    
    //To find min in 2D array

    // int min = INT_MAX;
    // for (int i = 0; i <= m - 1; i++){
    //     for (int j = 0; j <= n - 1; j++){
    //         if(min > arr[i][j])
    //             min = arr[i][j];

    //     }
    // }
    // cout << min;

    int max = INT_MIN;
    for (int i = 0; i <= m - 1; i++){
        for (int j = 0; j <= n - 1; j++){
            if(max < arr[i][j])
                max = arr[i][j];

        }
    }
    cout << max;

    
}