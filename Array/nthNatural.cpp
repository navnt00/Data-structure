#include <iostream>
using namespace std;

long long findNth(long long N) {
    long long result = 0, base = 1;
    while (N > 0) {
        result += (N % 9) * base;
        N /= 9;
        base *= 10;
    }
    return result;
}

int main() {
    long long N;
    cin >> N;
    cout << findNth(N) << endl;
    return 0;
}