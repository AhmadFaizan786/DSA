#include <iostream>
#include<limits.h>
using namespace std;

int main() {
  // Your code here
  int n;
  cout<<"How many numbers you want to enter:";
  cin>>n;
  int min = INT_MAX;
  int max = INT_MIN;

  for(int i=1; i<=n; i++){
    int numbers;
    cin>>numbers;
    if(numbers <min){
        min = numbers;
    }

    if(numbers > max){
        max = numbers;
    }

  }
  cout<<min<<"   "<<max;
}