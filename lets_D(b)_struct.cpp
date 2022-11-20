/*Create a structure to specify data of customers in a bank. The data
to be stored is: Account number, Name, Balance in account.
Assume maximum of 200 customers in the bank.
(1) Write a function to print the Account number and name of
each customer with balance below Rs. 100.
(2) If a customer requests for withdrawal or deposit, the form
contains the fields:
Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a program to give a message, “The balance is insufficient
for the specified withdrawal”, if on withdrawal the balance falls
below Rs. 100. */
#include<stdio.h>

struct bank
{
    char name[25];
    int Acc_num;
    float Acc_Bal;
}b[200];

void scanner()
{
    printf("\nKindly Fill the form : \n")
    for(int i=0;i<200;i++)
    {
        
        printf("\nEnter name of the customer : ");
        scanf("%s",&b[i].name);

        printf("\nEnter the Account number of the customer : ");
        scanf("%d",&b[i].Acc_num);

        printf("\nEnter the Account Available Balance : ");
        scanf("%f",&b[i].Acc_Bal);
    }
}

void printer()
{
    printf("\nCustomers details ( Avail bal < 100 ) : \n");
    for(i=0;i<200;i++)
    {
        if(b[i].Acc_Bal < 100)
        {
        printf("\nName of the customer : %s",b[i].name);
        printf("\nAccount number : %d",b[i].Acc_num);
        }
    }
}

void transaction()
{
    float amount;
    int i,Acc, code;
    printf("\nEnter '1' to deposit and '0' to withdraw : ");
    scanf("%d",&code);
    if(code == 0) // Withdraw
    {
        printf("\nWelcome here! kindly Fill the form : ");
        printf("\nEnter the Account number of the customer : ");
        scanf("%d",&Acc);
        printf("\nEnter the amount to withdraw from your Account : ");
        scanf("%f",&amount);
        for(i=0;i<200;i++)
        {
            if(b[i].Acc_num == Acc)
            {
                if(amount<=b[i].Acc_Bal)
                printf("\n%f have been debited from your Account :\nAvailble Bal : %f",amount,((b[i].Acc_Bal)-amount);
                if(b[i].Acc_Bal < amount) printf("\nYou do not have enough Bal to withdraw.");
                break;
            }

            if(i == 199 && b[i].Acc_num != Acc) printf("\nAccount not found :\n");
        }
    }

    if(code != 1 && code!= 0) printf("\nInvalid input.");

    if(code == 1) //depositing amount
    {
        printf("\nWelcome here! kindly Fill the form : ");
        printf("\nEnter the Account number of the customer : ");
        scanf("%d",&Acc);
        printf("\nEnter the amount : ");
        scanf("%f",&amount);
        for(int i=0;i<200;i++)
        {
            if(Acc == b[i].Acc_num)
            {
                b[i].Acc_Bal += amount;
                printf("\n%f have been Credited to your Account :\nAvailble Bal : %f",amount,b[i].Acc_Bal);
                break;
            }

            if(i == 199 && b[i].Acc_num != Acc) printf("\nAccount not found :\n");
        }
    }



}

int main()
{
    struct bank b[200];
    scanner();
    printer();
    transaction();
    return 0;
}