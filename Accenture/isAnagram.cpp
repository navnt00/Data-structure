#include<iostream>
#include<algorithm>
using namespace std;
bool isAnagram(string string1 , string string2){
    if(string1.length() != string2.length()){
        return false;
    }
    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    return string1 == string2;
}
int main(){
    string test1 = "silent";
    string test2 = "listeh";
    if(isAnagram(test1 , test2)){
        cout << "Strings are Anagram" << endl;
    }else{
        cout << "Strings are Not Anagram" << endl;
    }
    return 0;
}
