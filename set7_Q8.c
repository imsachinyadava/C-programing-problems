/*
Q8.Create a three–dimensional array and print the address of its elements in 
increasing order.
*/

#include <stdio.h>

int main(){
    int arr[1][2][3]={1, 2, 3, 1, 5, 3};
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}