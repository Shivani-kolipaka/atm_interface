#include <stdio.h>
long amount=1000,deposite,withdraw;
int choice,pin;
int main()
{
while(pin !=2222)
{
printf("Enter pin: \n");
scanf("%d",&pin);
if(pin!=2222)
printf("invalid pin\n");
}

printf("1.Balance\n");
printf("2.Withdraw\n");
printf("3.Deposite\n");
printf("4.Exit\n");
printf("enter choice: \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Balance: %lu\n",amount);
break;
case 2:
printf("Amount to withdraw\n");
scanf("%lu",&withdraw);
if(withdraw%100!=0)
{
printf("enter amount in 100 mul\n");
}
else if(withdraw>(amount-500))
{
printf("insafitiant value\n");
}
else
{
amount=amount-withdraw;
printf("Balance amount:%lu\n",amount);
}
break;
case 3:
printf("Enter amount to deposite\n");
scanf("%lu",&deposite);
amount=amount+deposite;
printf("Total:%lu\n",amount);
break;
case 4:
printf("Thank you\n");
break;
default :
printf("invalid choice");
}
}