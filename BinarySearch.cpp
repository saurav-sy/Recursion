#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& array , int item, int left, int right){
   if(left > right){
       return -1;
   }
   int mid = (left + right)/2;

   if(array[mid] == item){ //if present in the middle
       return mid;
   }
   else if (item > array[mid]){ //if present in right half
       return binarySearch(array,item,mid  + 1,right);
   }
   else{ //if present in left half
       return binarySearch(array,item,left,mid - 1);
   }

}

int main(){

    vector<int> array = {10,20 ,30 ,40 ,50 ,60,70,80,90};

    int foundIndex = binarySearch(array,100,0,array.size());

    if(foundIndex == -1){
        cout<<"\nelement is not present in the array";
    }
    else{
        cout<<"element found at index: "<< foundIndex;
    }

    return 0;
}
