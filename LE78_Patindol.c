#include <stdio.h>
#include <string.h>

int main() {
    int n, i;

    printf("=== FINDING THE LARGEST ELEMENT ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);


    char str[1000];
    int vowels = 0;

    printf("\n=== NUMBER OF VOWELS IN A STRING ===\n");
    printf("Enter a sentence or word: ");
    getchar(); 
    fgets(str, sizeof(str), stdin);

        for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels is: %d\n", vowels);

    return 0;
}