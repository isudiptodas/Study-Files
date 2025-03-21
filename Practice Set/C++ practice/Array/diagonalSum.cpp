/* 
Given a 2d array of size n, find out the diagonal sum
*/

#include<iostream>
using namespace std;

int diagonalSum(int arr[][3], int row, int col){
    
    int sum = 0;
    
    for(int i=0; i<row; i++){
       
        for(int j=0; j<col; j++){
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j == row-i-1){
                sum+=arr[i][j];
            }
        }
        
    }
    
    return sum;
    
}

int main(){
    
    int arr[3][3] = {{3, 21, 8}, {2, 19, 6}, {15, 6, 9}};
    int row = 3;
    int col = 3;
    
    cout<<diagonalSum(arr, row, col)<<endl;
    
    
}