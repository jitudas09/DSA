#include<bits/stdc++.h>
using namespace std;

void fibonacci_print( int a , int b , int n ){

    if( n == 0 ) return ;

    cout << a << " " ;

    fibonacci_print( b , a + b , n - 1 ) ;
}

int main(){

    int n ;

    cout << "Print Fibonacci numbers up to: " ; 

    cin >> n ;

    cout << "Fibonacci Series : " << endl ; 
    
    fibonacci_print( 0 , 1 , n ) ;

    return 0 ;
}