#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("clear");
    float draw, dep, transfer;
    char name[24];
    float balance = 5000;
    int account, account1, account2;
    int type;
    int transaction;

    printf("\n\t\t\t\tBANKING SYSTEM\n\n");
    printf("\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    printf("\t\t\4\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\4\n");
    printf("\t\t\4\tWELCOME TO OUT RAMESSES BANKING SYSTEM\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\4\n");
    printf("\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    printf("Enter your name: \n");
    scanf("%s", &name);
    printf("\nPlease enter your account no. : \n");
    scanf("%d", &type);

    while(transaction == 1)
    {
        int option;

        printf("\nchoose what you want to do\n");
        printf("1 - Balance Enquiry\n");
        printf("2 - Deposit\n");
        printf("3 - Withdraw\n");
        printf("4 - Transfer\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
    }
    return(0);
}