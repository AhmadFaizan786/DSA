#include <iostream>

using namespace std;

int main() {
  // Your code here
   int n;
   cout<<"enter a number ";
   cin>>n;
   int orig = n;
   int rev_num = 0;

   while(n>0){
    int last_digit = n%10;
    rev_num = rev_num*10 + last_digit;
    n /= 10; 
   }
   if(rev_num == orig){
    cout<<orig<<" is a palindromic number.";
   }else{
    cout<<orig<<" is not a palindromic number.";
   }
}
