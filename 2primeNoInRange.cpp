#include <iostream>
#include <functional>
#include<cmath>

using namespace std;

bool IsPrimeNo(int n) {
    // Handle edge cases: 0 and 1 are not prime
    if (n <= 1) {
        return false;
    }

    // Efficiently check for divisibility up to the square root of n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true; // If no divisors found, n is prime
}

int main() {
  // Your code here
  int a,b;
  cin>>a;
  cin>>b;

  for(int i=a;i<=b;i++){
    if(IsPrimeNo(i)){
        cout<<i<<"  ";
    }
  }
}