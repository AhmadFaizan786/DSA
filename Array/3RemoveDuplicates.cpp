#include<set>
#include <iostream>
#include<vector>

using namespace std;

// int main() {
//   // Your code here
//   int n; 
//   cout<<"Enter the size of array:"<<endl;
//   cin>>n;
//   vector<int>arr(n);
//   cout<<"Enter the elements:"<<endl;
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   set<int> S;
//   for(int i=0; i<n; i++){
//     S.insert(arr[i]);
//   }

//   int k = S.size();
//   int j = 0;
//   for (int x: S) {
//     arr[j++] = x;
//   }
//   cout<<"The no of unique elements in the array:"<<k;

// }

//time complexity: nlog(n) + n
// space complexity: o(n)

//OPTIMAL SOLUTION 
//Using two pointers approach
//in-place 

int main(){

  int a[7] = {1,3,3,3,3,4,6};

  int i=0;
  for(int j=0; j<7; j++){
    if(a[i] != a[j]){
      a[i+1] = a[j];
      i++;
    }
  }
  cout<<"Size of array without duplicates:"<<i+1;

  //time complexity: O(n)
  // space complexity : O(1)





}