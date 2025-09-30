#include <stdio.h>
#define MAX_IDs 32 //4 Bytes = 32 bit 
int main(){
  int A_ids[MAX_IDs] = {0, 1, 2, 3}; // array of size 4 Bytes or 32 bit
  int B_ids[] = {0, 1, 2, 3}; // definatioh with the exact array elemnts, no need to assign size
  printf("1st element %d\n ", A_ids[0]);
   A_ids[3] = 0x41; 
  // array of size 3 bit (0 0 0 to 1 1 1) with the of hexdec which is 0 to 5 in range, Wrong Assumption X
  printf("A_ids is %d\n ", A_ids[3]);
  //few compiler sends warning to this
  
  // strings
  //
  char mychar[] = {'D', 'R', 'K', '7', 0}; // here 0 is taken as nullbyte or char
  char *my_nchar = "hello there";
  printf("%s, Mr. %s\n", my_nchar, mychar);
  return 0;
  /*
   *strcpy(dest, src);
   *strncpy(dest, src, n); where n is no. of char you want.
   * */
}
