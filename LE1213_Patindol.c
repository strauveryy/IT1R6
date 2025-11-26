#include <stdio.h>

int main() {
    FILE *records;
    records = fopen("student_records.txt", "w");
    fprintf(records, "STUDENT DATA:\n\n");
    int total_records;
    char name[50];
    int age;
    char course[50];
    
    printf("How many students do you want to record? ");
        while (scanf("%d", &total_records) != 1) {
        printf("Invalid input. Please enter a NUMBER: ");
        while (getchar() != '\n');  

        }
    getchar();

    for (int i = 0; i < total_records; i++) {
        printf("\nStudent %d\n", (i+1));
        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter Age: ");
        scanf("%d", &age);
        getchar();

        printf("Enter Course: ");
        fgets(course, sizeof(course), stdin);
        fprintf(records, "Student %d\n", (i+1));
        fprintf(records, "Name: %s", name);
        fprintf(records, "Age: %d\n", age);
        fprintf(records, "Course: %s", course);
        fputs("\n---------------------------------\n\n", records);
    }
    fclose(records);
    printf("Student database successfully saved to file.\n\n");

    printf("Reading Student Database:\n\n");

    records = fopen("student_records.txt", "r");

    char line[100];
    int currentStudent = 1;
    while (fgets(line, sizeof(line), records) != NULL) {
        printf("%s", line);
        currentStudent++;
    }

    return 0;
}