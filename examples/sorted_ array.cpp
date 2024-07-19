#include<iostream>
using namespace std;
int main(){

    int array[]={1,3,5,7,9};
     
     bool sorted=true;
    for (int i=1;i<5;i++){

    
        if (array[1]<=array[i-1]){
            sorted=false;

        }
    }
   cout<<sorted<<endl; 
}