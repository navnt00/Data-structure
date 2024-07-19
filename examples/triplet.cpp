#include<iostream>
using namespace std;
int main(){

    int array[]={3,8,5,0,2,6};
    int targetsum=8;
    int size=6;

    int triplets=0;gti statud

    for( int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++)
            if(array[1]+array[2]+array[3]==targetsum){
                triplets++;

            }

        }

    }
    cout<<triplets<<endl;

    return 0;
}