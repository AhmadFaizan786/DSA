// #include <iostream>
// #include <limits.h>

// using namespace std;

// int main() {
//     // Initialize size before input
//     int n;

//     cout << "Enter the size of the array: ";
//     cin >> n;

//     // Declare and initialize the array
//     int array[n];

//     // Input elements with individual spaces
//     cout << "Enter the elements of the array (space-separated): ";
//     for (int i = 0; i < n; i++) {
//         cin >> array[i];
//     }

//     // Initialize maximum and minimum elements
//     int maximumElement = INT_MIN;
//     int minimumElement = INT_MAX;

//     // Find the maximum and minimum elements
//     for (int i = 0; i < n; i++) {
//         if (array[i] > maximumElement) {
//             maximumElement = array[i];
//         }
//         if (array[i] < minimumElement) {
//             minimumElement = array[i];
//         }
//     }

//     cout << "Maximum element in the array is: " << maximumElement << endl;
//     cout << "Minimum element in the array is: " << minimumElement << endl;

//     return 0;
// }






#include <iostream>
#include<limits.h>

using namespace std;

int main() {
  // Your code here
//   
 cout << "Enter the size of the array: ";

  // Declare and initialize the variable to hold the size
  int n;
  cin >> n;
  int array[n];

  cout << "Enter the elements of the array (space-separated): "<<endl;
  for(int i=0; i<n; i++){
    cin>>array[i];
  }


  int max = INT_MIN;
  int min = INT_MAX;

  for(int i=0; i<n; i++){
    if(array[i] > max){
        max = array[i];
    }
    if(array[i] < min){
        min = array[i];
    }
  }
  cout<<"Maximum element in the array is:"<<max<<endl;

  cout<<"Minimum element in the array is:"<<min<<endl;

}