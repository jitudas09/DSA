#include<bits/stdc++.h>
using namespace std ; 

// if the array is already sorted (1,2,3,4) ;

void bubble_sort( int arr[] , int n ){
    bool isSwap = false ; 
    for ( int i = 0 ; i<n-1 ; ++i){
        for ( int j = 0 ; j<n-i-1 ; ++j){
            if(arr[j] > arr[j+1]) 
            swap(arr[j], arr[j+1]) ; 
            isSwap = true ; 
        }
    }

    if(!isSwap) // array is already sorted ;
        return ; 
}

void printArray( int arr[] , int n ){

    for ( int i= 0 ; i<n ; i++){
        cout << arr[i] << ' ' ; 
    }
}

int main (){
    int n = 5; 
    int arr[n] = { 1,2,3,4,5} ; 

    bubble_sort(arr, n ) ; 
    printArray(arr,n) ; 
    return 0  ;

    return 0 ; 
}
