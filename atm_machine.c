#include <stdio.h>
int main()
{
    int pin,choice,bal,wd,co,dep,t=1;
    printf("TYPE YOUR CURRENT BALANCE: ");
  scanf("%d",&bal);
  printf("-------------------------\n\nTYPE YOUR SECRET PIN NUMBER: ");
  scanf("%d",&pin);
  carry:
  while(t){
      
  printf("\n\nHELLO! WELCOME TO OUR ATM SERVICES\n 1. BALANCE CHECKING\n 2. CASH WITHDRAWAL\n 3. CASH DEPOSITION\n 4. EXIT\n***********************************************");
    printf("\n\nPLEASE PROCEED WITH YOUR CHOICE: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("THE ACCOUNT BALANCE IN RS : %d",bal);
        break;
        case 2:
        label:
        printf("\nINSERT THE AMOUNT TO BE WITHDRAWAL: ");
        scanf("%d",&wd);
        if(wd>bal){
            printf("\nNOT SUFFICIENT BALANCE\nPLEASE TRY AGAIN");
            goto label;
        }
        else{
            if(wd%100==0){
                bal=bal-wd;
                  printf("\n\nNOW YOU CAN COLLECT THE CASH\nTHE CURRENT BALANCE IS %d",bal);
                  break;
             }
              else{
                printf("\nYOU ARE REQUESTED TO INSERT THE AMOUNT IN MULTIPLES OF 100\n");
                 goto label;
             }
        }
        case 3:
        printf("\n\nINSERT THE AMOUNT TO BE DEPOSITED: ");
        scanf("%d",&dep);
        bal=bal+dep;
        printf("NOW THE BALANCE IS %d\n\n",bal);
        break;
        case 4:
        t=0;
        printf("\n\nTHANK YOU FOR USING OUR ATM SERVICES\n");
        goto carry;
        default :
        printf("\n\nINVALID INPUT\nPLEASE TRY AGAIN\n");
    }
    printf("\n\nWOULD YOU LIKE TO CONTINUE?\n1.YES\n0.NO\n");
    scanf("%d",&co);
    if(co==0){
        printf("\n\nTHANK YOU FOR USING OUR ATM SERVICES\n");
    }
    t=co;
  } 
}
