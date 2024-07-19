 #include<iostream>
 using namespace std;

 int binarysearch(int arr[], int size, int key){
    int start=0;
    int end =size-1;

    int mid =start + (end-start)/2;
    while(start <=end){
        if(arr[mid]==key){
            return mid;

        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;

 }
 int main(){

    int even[6] = {3,6,9,12,15,18};
    int odd[5] = {3,8,11,14,16};

    int index = binarysearch(even,6,15);
    cout<<"index of 15 is : "<<index<<endl;

    int oddindex = binarysearch(odd,5,11);
    cout<<"index of 11 is: "<<oddindex<<endl;






    return 0;

 }