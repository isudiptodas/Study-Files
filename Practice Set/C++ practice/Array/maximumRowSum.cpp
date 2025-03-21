/* 
Given a 2d array of size n, find out the maximum row sum
*/

#include<iostream>
using namespace std;

int maxRowSum(int arr[][3], int row, int col){
    
    int max = 0;
    
    for(int i=0; i<row; i++){
        
        int rowSum = 0;
        
        for(int j=0; j<col; j++){
            rowSum+=arr[i][j];
            if(rowSum>max){
                max = rowSum;
            }
        }
    }
    
    return max;
    
}

int main(){
    
    int arr[3][3] = {{3, 5, 8}, {7, 19, 6}, {11, 6, 9}};
    int row = 3;
    int col = 3;
    
    cout<<maxRowSum(arr, row, col)<<endl;
    
    
}