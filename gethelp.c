#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[25];
   printf("Enter the name of the program you'd like to find help for.\nExamples: gcc, mkdir\n");
   scanf("%s", command);
   strcat(command, " --help" );
   system(command);

   return(0);
} 
