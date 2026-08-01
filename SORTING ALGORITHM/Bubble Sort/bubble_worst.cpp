#include<bits/stdc++.h>
using namespace std ; 

// time complexity O(n*n) ;

void bubble_sort( int arr[] , int n ){

    for ( int i = 0 ; i<n-1 ; ++i){
        for ( int j = 0 ; j<n-i-1 ; ++j){
            if(arr[j] > arr[j+1]) 
            swap(arr[j], arr[j+1]) ; 
        }
    }
}

void printArray( int arr[] , int n ){

    for ( int i= 0 ; i<n ; i++){
        cout << arr[i] << ' ' ; 
    }
}

int main (){
    int n = 5; 
    int arr[n] = { 4, 1 , 5, 2 , 3} ; 

    bubble_sort(arr, n ) ; 
    printArray(arr,n) ; 
    return 0  ;

    return 0 ; 
}
