#include <stdio.h>

int main() {
    FILE *file;
    char name[50], section[100];
    
    printf("Complete Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Section: ");
    fgets(section, sizeof(section), stdin);
    
    file = fopen("students.txt", "w");
    if (file == NULL){
         printf("Error Opening File\n");
         return 1;
    }
    fprintf(file, "Complete Name %sSection: %s\n", name, section);
    fclose(file);
    
    printf("Information succesfully saved to students.txt\n\n");
    
    file = fopen("students.txt", "r");
    char ch;
    while ((ch = fgetc(file)) !=EOF)
        putchar(ch);
    fclose(file);
    
    return 0;
}
