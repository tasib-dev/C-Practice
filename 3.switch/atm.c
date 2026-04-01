#include <stdio.h>
int main()
{
    int balance = 1000;
    int choice;
    int amount;

    while(1){
    printf("Which option do you want? (just press the number)\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Your balance is %d\n", balance);
        break;

    case 2:
        printf("How much amount do you want to deposit? \n");
        scanf("%d", &amount);
        balance = balance + amount;
        printf("now you have %d\n", balance);
        break;    
    
    case 3:
        printf("How much amount do you want to withdraw? \n");
        scanf("%d", &amount);
        if (amount <= balance)
        {
          balance = balance - amount;
          printf("now, you have %d\n", balance);
        } else {printf("not enough money\n");}
        break;

    case 4:
         printf("Thank You\n");
         break;
        

    default:
        printf("wrong choice\n");
        break;
    }

    if (choice == 4) {
        break;
    }

}

    return 0;
}