/* 
Given a 2d array of size n, find out the maximum column sum
*/

#include<iostream>
using namespace std;

int maxColSum(int arr[][3], int row, int col){
    
    int max = 0;
    
    for(int i=0; i<row; i++){
        
        int colSum = 0;
        
        for(int j=0; j<col; j++){
            colSum+=arr[j][i];
            if(colSum>max){
                max = colSum;
            }
        }
        
    }
    
    return max;
    
}

int main(){
    
    int arr[3][3] = {{3, 21, 8}, {2, 19, 6}, {15, 6, 9}};
    int row = 3;
    int col = 3;
    
    cout<<maxColSum(arr, row, col)<<endl;
    
    
}