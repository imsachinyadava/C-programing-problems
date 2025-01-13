/*
Q7.Create a structure representing a bank account of a customer. What fields did 
you use and why?
*/
struct bankacc{
    char name[100];  // name of account holder
    int account_no;  // account number
    float amount;    // amount present in the account
};

#include <stdio.h>
#include <string.h>

int main(){
    struct bankacc cstmer1;
    strcpy(cstmer1.name, "Shyam");
    cstmer1.account_no=6583565;
    cstmer1.amount=26525.36;
    printf("Name: %s\n", cstmer1.name);
    printf("Account No.: %d\n", cstmer1.account_no);
    printf("Amount: %0.2f\n", cstmer1.amount);
    return 0;
}