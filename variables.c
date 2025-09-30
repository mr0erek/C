#include "stdio.h" // copy's the standred file content to .
#define MAX_PERSONS 1024; /* just an instance, it define's a constant variable global scope
                             the value may affects once, change in value happend to any scope
                            eg:
                            {
                             MAX_PERSON = 0;
                           }
                             MAX_PERSONS remains 0 for every scope;
                          */
// #define DEBUG

int main(){
  #ifdef DEBUG
  printf("WE ARE IN DEBUG MODE %s:%d\n", __FILE__, __LINE__);
  #endif /* ifdef MACRO */
  /*
   * Alternative way in CLI : gcc -o <output_file_name> <YourFileName.c> -D DEBUG 
   * -DDEBUG stands for define debug
   *  -D <MACRO>=<VALUE> applicable in argument based
   *  check help for More
   *
  */
  return 0;

}
