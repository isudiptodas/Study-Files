/* 
Given a 2d array of size n, perform linear search on it and if the element
is present then return one or -1 otherwise
*/

#include<iostream>
using namespace std;

int matrixLinearSearch(int arr[][3], int row, int col, int val){
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==val){
                return 1;
            }
        }
    }
    
    return -1;
    
}

int main(){
    
    int arr[3][3] = {{3, 5, 8}, {7, 9, 6}, {11, 6, 9}};
    int row = 3;
    int col = 3;
    int val = 19;
    
    cout<<matrixLinearSearch(arr, row, col, val)<<endl;
    
    
}