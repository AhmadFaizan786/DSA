#include <iostream>

using namespace std;


// left rotating array by one index 
int main() {
  // Your code here
  int a[] = {2,3,1,5,0};
  int temp = a[0];
  for(int i=1; i<5; i++){
    a[i-1] = a[i];
    a[4] = temp;
  }

  for(int i=0; i<5; i++){
    cout<<a[i]<<"  ";
  }

}