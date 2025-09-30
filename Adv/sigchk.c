#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
  //print the process id
  printf("\n Process ID : %d\n",getpid());
  
  //print msg in infinite loop
  const char* message = "Running...";
  while(1){
    printf("\r\t\t\t");
    printf("\r%s", message);
    fflush(stdout);
    sleep(1);
    for (int i = 0; i < 3; i++) {
      printf(".");
      fflush(stdout);
      sleep(1);
    }
  }

  return 0;
}
