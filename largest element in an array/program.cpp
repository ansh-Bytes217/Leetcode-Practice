#include <bits/stdc++.h>
using namespace std

int largestElement(vector<int> &arr,int n){
   int largest=arr[0];

   for(i=0;i<n;i++){
      if(arr[i]>largest){
         largest=arr[i];
      }
   }
    return largest


int main(){
   vector<int> arr[]= {1,4,3,2,5};
   int n = arr.size();

   cout << "the largest element in the array is :" << largestElement(arr[],n) << endl;
   return 0;

       
