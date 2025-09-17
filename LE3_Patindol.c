#include<stdio.h>

int main (){

char name[50]="";
char section[30]= "";
int num1;
int num2;
float division;

    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%i", &num2);
    
    
    printf("\n ★Student Calculator ★\n");
    printf("\nStudent Name: %s",name);
    printf("Section: %s", section);
   
    printf("Results:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    
    if (num2 != 0) {
        division = (float) num1 / num2;
        printf("%d / %d = %.2f\n", num1, num2, division);
    } 
    else {
        printf("%d / %d = Undefined(cannot divide by zero)\n", num1, num2, division);
    }

    return 0;
}

