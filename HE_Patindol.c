#include <stdio.h>
    

int main (){
    
    float balance = 500;
    float amount;
    int choice;
    
    printf ("   =============================\n");
    printf ("   ====== STRAUVERYY BANK ======\n");
    printf ("   =============================\n");
    


 do {
    printf("\n[1] Balance Inquiry\n");
    printf("[2] Deposit\n");
    printf("[3] Withdraw\n");
    printf("[4] Exit\n");
    
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
switch (choice){
    case 1:
        printf ("\nYour current balance is: %.2f\n", balance);
        break;
    
    case 2:
        printf ("Enter amount to deposit: ");
        scanf ("%f", &amount);
        if (amount < 20){
            printf("\n   Invalid amount! Please deposit 20.00 or more.   \n");
        } else {
            balance += amount;
            printf("\n---------------------------------------\n");
            printf("You have succesfully deposited money!\n");
            printf("---------------------------------------\n");
            printf("Your current balance is: %.2f\n", balance);
            printf("=======================================\n");
        }
        break;
    
    case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount < 100){
            printf ("\n   Invalid amount. Please withdraw  100.00 or more.   \n");
        }
        else if (amount > balance){
            printf("   Insufficient Balance.   \n");
        } else if (balance - amount < 100){
            printf("\n   Withdrawal denied! You must maintain at least 100.00 in your account.   \n");
        }
        else {
            balance -= amount;
            printf("\n---------------------------------------\n");
            printf("You have succesfully withdrawn money!\n");
            printf("---------------------------------------\n");
            printf("Your current balance is: %.2f\n", balance);
            printf("=======================================\n");
        }
         break;
         
    case 4:
         printf("\n                      Bye!    \n");
         break;
         
    default:
        printf("\n   Invalid choice. Please try again.   \n");
}
 } while (choice != 4);
 return 0;
}