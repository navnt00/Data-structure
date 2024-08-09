#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter The Row Number";
    cin >> m;
    int n;
    cout << "Enter The Column Number";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << sum;
}