#include <stdio.h>

/* Compile Processing
 * 1. Preprocessor
 * 2. Compilation
 * 3. Assembling
 * 4. Linking
 *
 */

#define MAX_IDs 32 //4 Bytes (4*8) 
#define PRINT_VAR(x) printf("%s = %d\n", #x, x) 
/* "we can control how these function behaves through these constant variables at compile time".
 * defining a PRINT_VAR as new print function which takes,
 * x value as argument and print in mentioned way.
 * NOTE: : A common approach is to create a macro that takes the variable and uses the preprocessor's stringification operator (#). The stringification operator, #, converts its macro argument into a string literal.
 * #define MACRO | for more check : https://g.co/gemini/share/b859bd99cddc
 * */
int main(){
  int A_ids[MAX_IDs] = {0, 1, 2, 3}; // array of size 4 Bytes or 32 bit
  int B_ids[] = {0, 1, 2, 3}; // definatioh with the exact array elemnts, no need to assign size
  
  A_ids[3] = 0x41; // array of size 3 bit (0 0 0 to 1 1 1) with the of hexdec which is 0 to 5 in range
  // but you can't do -> int C_ids[3] = 0x41; // wrong assumption X 
  //A_ids[3] means array A_idsand its 3rd index position.
  PRINT_VAR(A_ids[3]);
  return 0;
}
