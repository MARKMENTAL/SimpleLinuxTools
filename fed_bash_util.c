#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () {
   char command[300];
   char package[30];
   char usr[50];
   int choice = 0;
 
   printf("Choose a command to run\n1:Screenshot\n2:DNF Install\n3:DNF Remove\n4:Copy Backgrounds to Home Folder\n");
   scanf("%i", &choice);
   if (choice == 1){
     strcpy(command,"neofetch && spectacle"); 
   }
   else if (choice == 2){
     strcpy(command, "sudo dnf install ");
     printf("type the package name to install\n");
     scanf("%s",package);
     strcat(command, package);
 
   }
   else if (choice == 3){
     strcpy(command, "sudo dnf remove ");
     printf("type the package name to remove\n");
     scanf("%s",package);
     strcat(command, package);
 
   }
  else if (choice == 4){
     printf("Enter your user account name.\nCopied backgrounds will be stored in it's 'bgbackup' subfolder ");
     scanf("%s", usr);
     strcpy(command, "mkdir /home/");
     strcat(command, usr);
     strcat(command, "/bgbackup ; sudo cp -r /usr/share/backgrounds /home/");
     strcat(command,usr);
     strcat(command,"/bgbackup");
   }
   system(command);
   return(0);
}