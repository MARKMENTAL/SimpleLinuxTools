#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () {
   char command[300];
   char package[30];
   int choice = 0;
 
   printf("Choose a command to run\n1:Screenshot\n2:APT Install\n3:APT Remove\n4:Copy Backgrounds to Home Folder\n");
   scanf("%i", &choice);
   if (choice == 1){
      strcpy(command,"neofetch && spectacle"); 
   }
   else if (choice == 2){
      strcpy(command, "sudo apt-get install ");
      printf("type the package name to install\n");
      scanf("%s",package);
      strcat(command, package);
 
   }
   else if (choice == 3){
      strcpy(command, "sudo apt-get remove ");
      printf("type the package name to remove\n");
      scanf("%s",package);
      strcat(command, package);
 
   }
   else if (choice == 4){
      strcpy(command, "mkdir /home/$USER");
      strcat(command, "/bgbackup ; sudo cp -r /usr/share/wallpapers /home/$USER");
      strcat(command,"/bgbackup");
   }
   system(command);
   return(0);
}
