#include<iostream>
using namespace std;

// int IsPrime(int num){

//     for(int i=2;i*i<=num;i++){
//         if(num%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     // int n1;
//     // int n2;
//     // cin>>n1;
//     // cin>>n2;
//     for(int i=2;i<=n;i++){
//         if(IsPrime(i)){
//             cout<<i<<"  ";
//         }

//     }
//     cout<<"No prime numbers exist in this range";
// }

int  IsPrime(int number){
    if(number<2){
        return 0;
        cout<<"No Prime Numbers!";
    }

    for(int i=2;i*i<=number;i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cin>>n;
    for(int i = 2; i<=n; i++){
        if(IsPrime(i)){
            cout<<i<<" ";
        }
    }
}