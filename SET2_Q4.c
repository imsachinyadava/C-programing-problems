// Q4  Explain step by step evaluation of 
//     3*x/y – z+k, where x=2, y=3, z=3, k=1
#include <stdio.h>

int main(){
    int x=2, y=3, z=3, k=1;
    float answer = 3*x/y-z+k;
    printf ("the answer is %f ", answer);
    return 0;
}
// output: the answer is 0.00000
// steps
// 3*x/y-z+k
// 3*2/3-3+1
// 6/3-3+1 (*/ ARE MORE PREFERRED AND IS LEFT TO RIGHT ASSOCIATIVE)
// 2-3+1  (+- ARE ALSO LEFT TO RIGHT ASSOCIATIVE) 
// -1+1
// 0.00000

// FOLLOW ME :)