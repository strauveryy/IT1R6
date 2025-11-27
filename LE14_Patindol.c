#include <stdio.h>

int main() {
    FILE * sr;
    sr = fopen("student_records.txt", "a+");
    int id, choice;
    char name[100], section[100];
    
    
    if (sr == NULL){
        printf("Error! File not found.");
        return 1;
    
    }
    
   do {
        printf("\nEnter student ID Number: ");
        scanf("%d", &id);
        getchar();
        
        printf("Enter Complete Name: ");
        fgets(name, sizeof(name), stdin);
        
        printf("Enter Section: ");
        fgets(section, sizeof(section), stdin);
        
        fprintf(sr, "ID Number: %d\n", id);
        fprintf(sr, "Complete Name: %s", name);
        fprintf(sr, "Section: %s\n\n", section);
        
        printf("\n\nRecord added and saved sucesfully.");
        

        
        printf("\n\nAdd another student? [Enter 1 for Yes, 0 for No]:");
        scanf("%d", &choice);
        getchar();
        
    }while(choice == 1);
        
     fclose(sr);
     
     printf("\n All students have been recorded and saved. \n");
     
     return 0;
    
}
