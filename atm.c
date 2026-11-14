#include<stdio.h>
int main()
{
    int x,ammount = 10000,y,d;

    printf("Chose among these\n1. Withdraw\n2. Deposit\n3.Balance check\n ");
           scanf("%d",&x);
           if(x == 1)
           {
               printf("enter ammount to withdraw");
                        scanf("%d",&y);
                if(y<=10000)
                    {
                        printf("Withdraw sucesfull\n");
                        d = ammount-y;
                        printf("Remaining ammount = %d",d);
                }
                else
                    {
                        printf("Insufficient Balance");
                }
        }
        else if( x == 2 )
        {
            printf("enter ammount to deposit");
                        scanf("%d",&y);
                      d =  ammount+y;
                      printf("Total ammount = %d",d);
        }

        else
        {
            printf("balance = %d",ammount);

        }
return 0;

    }
