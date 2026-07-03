#include<bits/stdc++.h>
using namespace std ; 

int found_factorial(int n ){
    if( n == 0 ) return 1 ;

    return n * found_factorial(n-1) ;
} 


//                  Factorial using pointer 


// int main(){
//     int n;
//     cout << "Enter the value of n : " ;
//     scanf("%d",&n);
//     int *p;
//     p=&n;
//     int fact=1;
//     for(int i=1 ; i<=*p ; i++){
//         fact*=i;
//     }
//     cout << "Your factorial is : " << fact ;

//     return 0;
// }