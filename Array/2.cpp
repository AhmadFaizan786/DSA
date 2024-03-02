#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;


//better approach than brute force and time complexity is 2 O(n);

// int main() {
//    int arraySize;

//    cout << "Enter the size of the array: ";
//    cin >> arraySize;

//    vector<int>arr(arraySize); // Declare the array with the specified size

//    cout<< "Enter the array elements: ";
//    for (int i = 0; i < arraySize; i++) {
//        cin >> arr[i];  // Input elements into the array
//    }

//    cout << "The array elements are: ";
//    for (int i = 0; i < arraySize; i++) {
//        cout << arr[i] << " ";  // Print the elements of the array
//    }

//    cout << endl;

//    int largest = INT_MIN;
//    for(int i=0; i<arraySize; i++){
// 	if(arr[i] > largest){
// 		largest = arr[i];
// 	}
//    }

//    cout<<"Largest element in the array:"<<largest<<endl;

//    int second_lar = INT_MIN;
//    for(int i=0; i<arraySize; i++){
// 	if(arr[i]>second_lar && arr[i] != largest){
// 		second_lar = arr[i];
// 	}
//    }

//    cout<<"Second largest element in the array:"<<second_lar;

//    return 0;
// }


//--------------==========*****OPTIMAL SOLUTION*******============----------------

int main() {
  // Your code here
  int n;
  cout<<"Enter the size of array:"<<endl;
  cin>>n;

  vector<int> a(n);

  for(int i=0; i<n; i++){
	cin>>a[i];
  }

  int largest = a[0];
  int slargest = INT_MIN;

  for(int i=1; i<n; i++){
	if(a[i] > largest){
		slargest = largest;
		largest = a[i];
	}
	else if(a[i] < largest && a[i] > slargest){
		slargest = a[i];
	}
  }

  cout<<largest<<"   "<<slargest;
}












// #include <iostream>

// using namespace std;

// int main() {
//   // Your code here
//   int a[6] = {2, 96, 69, 77, 145, 20};
//   int largest = a[0];
//   for(int i=0; i<6; i++){
//     if(a[i] > largest){
//         largest = a[i];
//     }
//   }
//   cout<<"largest:"<<largest<<endl;
//   int second_largest =0;
//   for(int i=5; i>=0; i--){
//     if(a[i] != largest){
//         second_largest = a[i];
//     }
//   }
//   cout<<"Second largest:"<<second_largest;

// }