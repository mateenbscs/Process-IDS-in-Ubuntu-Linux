#include <stdio.h>
#include <unistd.h>

int main() {
 
   printf("Parent ID = %d and Child ID = %d\n", getppid(),getpid());
 
   return 0;
 
  }
