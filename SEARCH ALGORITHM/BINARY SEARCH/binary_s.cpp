#include<bits/stdc++.h>
using namespace std ; 


int bin_search( int arr[] , int n , int val ){
    
    int st = 0 , end = n-1 , mid ; 

    while(st<=end){
        mid = (st + end )/2 ;
        if(val > arr[mid]) st = mid + 1 ; 
        else if ( val < arr[mid]) end = mid-1 ; 
        else return mid ; 
    }
    return -1 ; 
}

int main (){
    int arr[4] = {1 , 2 , 3 , 4 } ; 
    cout << bin_search(arr , 4, 4)  << endl ;  
    return 0 ; 
}