#include<bits/stdc++.h>
using namespace std ; 

void selectionsort(int arr[] , int n ){
    bool is_sort= false ; 

    for ( int i = 0 ; i<n-1 ; i++){
        int smallidx= i ; 
        for (int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[smallidx]) {
                smallidx = j ; 
                is_sort= true  ; 

            }

        }
        // int temp = arr[i] ; 
        // arr[i] = arr[smallidx] ; 
        // arr[smallidx] = temp ; 

        swap(arr[i], arr[smallidx]) ; 

    }
    if(!is_sort) return ; 
}


void printArray( int arr[] , int n ){

    for ( int i= 0 ; i<n ; i++){
        cout << arr[i] << ' ' ; 
    }
}

int main (){
    int n = 5; 
    int arr[n] = { 1,2,3,4,5} ; 

    selectionsort(arr, n ) ; 
    printArray(arr,n) ; 
    return 0  ;

}