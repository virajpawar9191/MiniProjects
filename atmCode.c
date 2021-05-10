//PROGRAM TO PERFORM ATM OPERATIONS
#include<stdio.h>
#include<conio.h>
int main()
{
int c,a;
float w,d,t,balance=(1000000.00);
clrscr();
do
{
printf(".....WELCOME.........\n");
printf("<<<<<Enter 0 to quite>>>>>\n");
printf("!!!!Enter your choice from 1 to 5!!!\n#FOR--\n1.CHECK BALANCE\n2.CASH WITHDRAWL\n3.MINI STATEMENT\n4.DEPOSITE\n5.MONEY TRANSFER\n");
scanf("%d",&c);
switch(c)
{
case 1:
printf("BALANCE=1000000.00\n");
break;
case 2:
printf("ENTER THE AMOUNT TO WIDRAWL\n");
scanf("%f",&w);
balance=balance-w;
printf("YOUR AVAILABLE BAKLANCE IS:%f\n",balance);
break;
case 3:
printf("YOUR MINI STATEMENT IS....\n.....\n");
break;
case 4:
printf("ENTER THE AMOUNT TO DEPOSITE=\n");
scanf("%f",&d);
balance=balance+d;
printf("YOUR BALANCE IS:%f\n",balance);
break;
case 5:
printf("ENTER THE AMMOUNT TO TRANSFER :\n");
scanf("%f",&t);
balance=balance-t;
printf("ENTER THE ACCOUNT NUMBER TO TRANSFER :\n");
scanf("%d",&a);
printf("AMMOUNT IS TRANSFERED:%f\nTO ACCOUNT NUMBER:%d\n",t,a);
printf("YOUR AVAILABLE BALANCE IS :%f\n",balance);
break;
default:
printf("INVALIDE ENTERY\n");
printf("THANK YOU!!!");
break;
}
}while(c!=0);
getch();
return 0;
}
