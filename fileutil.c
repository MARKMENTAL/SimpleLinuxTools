#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char command[50];
   int choice = 0;
   char parameter[50];
   printf("What would you like to do?\n1:Create Folder\n2:Delete Folder\n3:Create/Open Text File\n4:Remove File\n");
   scanf("%i", &choice);
   if (choice == 1){
      strcpy(command, "mkdir ");
      printf("Enter the name of the directory you want to create\n");
      scanf("%s", parameter);
      strcat(command, parameter);
   }
   
   else if (choice == 2){
      strcpy(command, "rm -f ");
      printf("Enter the name of the directory you want to remove\n");
      scanf("%s", parameter);
      strcat(command, parameter);
   }
   
   else if (choice == 3){
      strcpy(command, "nano ");
      printf("Enter the name for your text file\n");
      scanf("%s", parameter);
      strcat(command, parameter);
   }
   
   else if (choice == 4){
      strcpy(command, "rm ");
      printf("Enter the name of the file you want to remove\n");
      scanf("%s", parameter);
      strcat(command, parameter);
   }
   system(command);
   return(0);
} 
