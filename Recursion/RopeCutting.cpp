#include <iostream>
using namespace std;

int maxCut(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n <= -1)
    {
        return -1;
    }
    int result = max(maxCut(n - a, a, b, c),
                     max(maxCut(n - b, a, b, c),
                         maxCut(n - c, a, b, c)));

   if(result == -1)
       return -1;

   return result + 1;
}
int main(){
    int n = 17, a = 10, b = 11, c = 3;
    cout << maxCut(n, a, b, c);
    return 0;
}