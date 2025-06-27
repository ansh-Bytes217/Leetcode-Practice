#include<bits/stdc++.h>
Using namespace std;

Int main(){
   int n;
   int hash[10^7]  //only works when hash array is declared globally
   cin >> n;
   Int arr[n];
   For(int i=0; i<n; i++){
       cin >> arr[i];
}

int hash[13] = {0}
for(int i=0;i<n;i++){
    hash[arr] += 1;
}

Int q;
cin >> q;
While(q--){
   Int number;
    cin >> number;

}
return 0;

//hash array is ready and traverses to fetch the number portraying number of times a number appeared in a array
// we can atmost declare an array upto 10^6; <throw segmentation error>

// for arrays greater than that we need to declare it globally upto 10^8
//CHARACTER HASHING
//counting the lower case alphabets in an array
/*We use ASCII values
‘a’=97
‘z’=122
Int main(){
   String s;
   Cin >> s;
   
precompute
Int hash[26] = {0}
For(int i=0; i<s.size ; i++){
     Hash[s[i]]++
}
Int q;
Cin >> q;
While(q--){
   char c;
   Cin >> c;
    Cout << hash[c] << endl

*the limitation in using character hashing is that we have a definite number till which for we can create the arrays
To overcome this problem we have map and unordered maps in c++*/
//*map stores all values in sorted order
//here we are using maps to store only the number of times a number is apprearing in that array not the all numbers of the array.
//Int main(){
  /*Int n;
   Cin >> n;
  Int arr[n];                time complexity N +N;
  Map<int,int>mpp;*/

\*For(int i=0; i<n; i++){
   Cin >> arr[i];
   Mpp[arr[i]]++;

Int q;
Cin >> q;
While(q--){
  Int number;
  Cin >> number;
  Cout << mpp[number] << endl;

//Time complexity of Map
//LOG N for best, avg and worst time complexity

/*Unordered map:
Worst case rarely happens
It happens due to intenal collisions
Hwo is internal map designed::*/

/*DIVISION METHOD:
trim down the number and modulo with 10 
Then see/count how many numbers are there in that index
We chain it as the numbers repeat in the array-LINEAR CHAINING
Collision- hashing used internally and make up chains due to division method
Also: folding and midsqaure method*/



