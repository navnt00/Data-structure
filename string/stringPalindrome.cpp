#include<iostream>
using namespace std;
bool isPalindrome(string str){
    int left = 0, right = str.length() - 1;
    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string str;
    cout << "Enter a String" << " ";
    cin >> str;
    if(isPalindrome(str)){
        cout << str << " " << "is palindrome" << endl;
    }else{
        cout << str << " " << "is not palindrome" << endl;
    }
}