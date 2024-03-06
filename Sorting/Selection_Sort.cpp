// #include<stdio.h>
// #include<iostream>
// #include<bits/stdc++.h>

// //Example 1
// /* 
// N = 6, 
// arr[] =  {1,2,4,0,-1,-2,55,3}
// output = -2, -1, 0, 1, 2, 3, 4, 55
// */

// int arr[] =  {1,2,4,0,-1,-2,55,3};

// int main(){

//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<n-1; i++){
//     for(int j=i+1; j<n-1; j++){
//         if(arr[j]<arr[i]){
//             arr[i] = arr[j];
//             j++;
//         }
//     }
//     i++;
// }

// for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;

//  }

// int arr[] = {1, 2, 4, 0, -1, -2, 55, 3};

// int main() {
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {  // Iterate until j reaches the end of the array
//             if (arr[j] < arr[i]) {
//                 int temp = arr[i];  // Use a temporary variable for swapping
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     // Optional: Print the sorted array to verify
//     // for (int i = 0; i < n; i++) {
//     //     std::cout << arr[i] << " ";
//     // }
//     // std::cout << std::endl;

//     // return 0;
// }


//perfect code for selection sort 

#include<bits/stdc++.h>

using namespace std;
void selection_sort(int arr[], int n) {
  // selection sort
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
}

//Best t.c = worst t.c = average t.c = O(n^2)

/**********Bubble Sort**********/

//push the max to the last by adjacent swaps 
//Here concept is opposite of selection sort 
