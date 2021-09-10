#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () {
   char command[300];
   char package[30];
   int choice = 0;
 
   printf("Choose a command to run\n1:Screenshot\n2:pacman Install\n3:pacman Remove\n4:pacman Update\n");
   scanf("%i", &choice);
   if (choice == 1){
      strcpy(command,"neofetch && spectacle"); 
   }
   else if (choice == 2){
      strcpy(command, "sudo pacman -S ");
      printf("type the package name to install\n");
      scanf("%s",package);
      strcat(command, package);
   }
   else if (choice == 3){
      strcpy(command, "sudo pacman -R ");
      printf("type the package name to remove\n");
      scanf("%s",package);
      strcat(command, package);
 
   }
   else if (choice == 4){
     strcpy(command, "sudo pacman -Syu");
   }
   
   system(command);
   return(0);
}
