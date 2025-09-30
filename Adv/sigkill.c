#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>

int main2(){
  // Get's Program Argument
  pid_t pid = atoi(argv[1]);
  //Sends signal to the specified process
  kill(pid, SIGUSR1);

  //print's msg and exiton
  printf("Sent signal to process %d\n", pid);
  return 0;


}
