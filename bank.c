/*Basics of Bank Account*/
#include<stdio.h>
int main(){
    long deposit,withdraw;
    char ch;
    printf("----Welcome to our Locker Bank-----\n");
    printf("1. Balance\n2. Deposit\n3. Withdraw\n");
    printf("Select Your Choice : ");
    scanf("%c",&ch);
    long balance=0;
    switch(ch){
        case '1':
        printf("Your Balance is Rs: %ld.00\n",balance);
        break;
        case '2':
        printf("Deposit amount Rs:");
        scanf("%ld",&deposit);
        balance=balance+deposit;
        printf("Your balance is Rs:%ld.00\n",balance);
        break;
        case '3':
        printf("Withdraw amount Rs:");
        scanf("%ld",&withdraw);
        balance=balance-withdraw;
        printf("Your Balance is Rs:%ld.00\n",balance);
        break;
        default :
        printf("Invalid choice");
    }
    return 0;  
}