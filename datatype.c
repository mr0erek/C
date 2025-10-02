#include<stdio.h>
#include<limits.h>/*taken here for macro variable contant like (INT_MIN|MAX, UINT_MAX, SHRT_MIN|MAX,)*/
#include<float.h> // used for floating-points

/*
 * C Format Specifiers: Comprehensive Guide
 *
 * The general syntax for a format specifier is:
 * %[flags][width][.precision][length]specifier
 *
 * --- Basic Specifiers ---
 *
 * %d, %i    : Signed decimal integer (int).
 * %u        : Unsigned decimal integer (unsigned int).
 * %o        : Unsigned octal integer.
 * %x, %X    : Unsigned hexadecimal integer (lowercase 'x', uppercase 'X').
 * %f, %F    : Floating-point number in decimal notation (float or double).
 * %e, %E    : Floating-point in scientific notation.
 * %g, %G    : Uses %f or %e (whichever is shorter).
 * %a, %A    : Hexadecimal floating-point.
 * %c        : Single character (char).
 * %s        : String of characters (char*).
 * %p        : Pointer address.
 * %%        : Prints a literal percent sign.
 *
 * --- Length Modifiers for Integers ---
 *
 * %h        : Half (short int or unsigned short int).
 * %hh       : Half-half (signed char or unsigned char).
 * %l        : Long (long int or unsigned long int).
 * %ll       : Long long (long long int or unsigned long long int).
 *
 * --- Common Integer Combinations with Length Modifiers ---
 *
 * %hd      : short int in decimal.
 * %hu      : unsigned short int in decimal.
 * %ho      : unsigned short int in octal.
 * %hx, %hX : unsigned short int in hexadecimal.
 *
 * %hhd     : signed char in decimal.
 * %hhu     : unsigned char in decimal.
 * %hho     : unsigned char in octal.
 * %hhx, %hhX : unsigned char in hexadecimal.
 *
 * %ld      : long int in decimal.
 * %lu      : unsigned long int in decimal.
 * %lo      : unsigned long int in octal.
 * %lx, %lX : unsigned long int in hexadecimal.
 *
 * %lld     : long long int in decimal.
 * %llu     : unsigned long long int in decimal.
 *
 * --- Length Modifier for Floating-Point ---
 *
 * %L        : Long double.
 *
 * --- Common Floating-Point Combinations with Length Modifiers ---
 *
 * %Lf      : long double in decimal notation.
 * %Le      : long double in scientific notation.
 * %La      : long double in hexadecimal notation.
 *
 * --- Flags (placed after '%' and before length/specifier) ---
 *
 * -         : Left-justifies the output within the field width.
 * +         : Forces a sign (+ or -) for signed numbers.
 * (space)   : Prepends a space for positive numbers.
 * 0         : Pads with leading zeros.
 * #         : Alternative form for output (e.g., `0x` for hex, force decimal point).
 *
 * --- Width and Precision (placed after flags) ---
 *
 * %[number] : Minimum field width (e.g., %10d).
 * %.[number]f : Precision for floats (digits after decimal).
 * %.[number]s : Precision for strings (max characters to print).
 * %.[number]d : Precision for integers (minimum digits, pads with zeros).
 * %*d         : Dynamic width specified by an `int` argument.
 *
 * --- Example Combinations ---
 *
 * printf("%#010x", 255);    // `0x000000ff`: Alternate form, zero-padded, width 10.
 * printf("%-+10.2f", 12.34); // `+12.34    `: Sign forced, left-justified, width 10, 2 decimals.
 * printf("%.5s", "Hello World"); // `Hello`: String truncated to 5 characters.
 * printf("%5.2d", 7);       // `00007`: Integer precision pads with zeros.
 */




void ALL_ABOUT_FLOAT(){
	/*
	[ datatype ] float: The base, single-precision floating-point type.
	[ datatype ] double: A larger, double-precision floating-point type, offering more range and precision than float.
	[ datatype ] long double: An extended-precision floating-point type, offering even greater range and precision than double, here long is not a modifier 
	Note : you can use `fabsf` funcion from math.h for remain a positive or unsigned float, Because a dedicated sign bit is a core part of the hardware-level representation, the concept of an "unsigned float" is not a simple modifier like it is for integers. 
	*/
	printf("\n\n---All About Floating floating-points ---\n\nSize of floating-point datatypes (float, double, long double):\n1. float: %d\n2. double: %d\n3. long double: %d",sizeof(float), sizeof(double), sizeof(long double));
	printf("\n\nSize & Range value of float datatype:");

    float flt_var_min = -FLT_MAX; // as FLT_MIN provides +ve min;
    float flt_var_max = FLT_MAX;
    //just an alternative method of unsigned float - fake unsigned

	printf("\n\n1. floating-point:\n\tsize: %d\n\tranging values: %g to %g", sizeof(flt_var_max), flt_var_min, flt_var_max);	
	/*
	  double: Use %f or %lf. Both are acceptable and have the same effect because of argument promotion.
	  long double: Use %Lf (uppercase L). 

	*/
	double dbl_var_min = DBL_MIN;
	double dbl_var_max = DBL_MAX;
	printf("\n\n2. Double floating-point;:\n\tsize: %d\n\tranging values: %lg to %lg", sizeof(dbl_var_max), dbl_var_min, dbl_var_max);
	

	long double lng_dbl_var_min = LDBL_MIN;
	long double lng_dbl_var_max = LDBL_MAX;
	printf("\n\n3. long Double floating-point;:\n\tsize: %d\n\tranging values: %Le to %Le", sizeof(lng_dbl_var_max), lng_dbl_var_min, lng_dbl_var_max);

}
void ALL_ABOUT_INT(){
	printf("\n\n---All About INT---\n\nSize of int datatype modifiers(short, long, long long):\n1. short int: %d\n2. Normal int: %d\n3. long int: %d\n4. long long int: %d",sizeof(short int), sizeof(int), sizeof(long int), sizeof(long long int));
	printf("\n\nSize & Range value of int datatype with/without (unsigned/signed) magnitude(value):");
	/*
	 cal: 
	    4byte / 2byte = 2byte 
	    2byte of size will be allocated to the datatype of INT
	 */
	short int shrt_var_min = SHRT_MIN; 
	short int shrt_var_max = SHRT_MAX;
	printf("\n\n1. signed short int:\n\tsize:%d\n\tranging values: %d to %d",sizeof(shrt_var_max), shrt_var_min, shrt_var_max);
	
	unsigned short int ushrt_var_min = 0;
	unsigned short int ushrt_var_max = USHRT_MAX;
	printf("\n\n2. unsigned short int:\n\tsize: %d\n\tranging values: %u to %u", sizeof(ushrt_var_max), ushrt_var_min, ushrt_var_max);

    int var_min = INT_MIN;
    int var_max = INT_MAX;
    unsigned int uvar_min = 0;
    unsigned int uvar_max = UINT_MAX;

	printf("\n\n3. Normal signed int:\n\tsize: %d\n\tranging values:%d to %d\n\n4. Normal unsigned int:\n\tsize:%d\n\tranging values: %u to %u\n", sizeof(var_max), var_min, var_max, sizeof(uvar_max), uvar_min, uvar_max);	
	
	long int lng_var_min = LONG_MIN;
	long int lng_var_max = LONG_MAX;
	long unsigned int ulng_var_min = 0;
	long unsigned int ulng_var_max = ULONG_MAX;
	printf("\n\n5. long signed int:\n\tsize: %d\n\tranging values: %ld to %ld\n\n6. long unsigned int:\n\tsize:%d\n\tranging values: %lu to %lu\n", sizeof(lng_var_max), lng_var_min, lng_var_max, sizeof(ulng_var_max), ulng_var_min, ulng_var_max);

	long long int llng_var_min = LLONG_MIN;
	long long int llng_var_max = LLONG_MAX;
	unsigned long long int ullng_var_min = 0;
	unsigned long long int ullng_var_max = ULLONG_MAX;
	printf("\n\n7. long long signed int:\n\tsize: %d\n\tranging values: %lld to %lld\n\n8. long long unsigned int:\n\tsize:%d\n\tranging values: %llu to %llu\n", sizeof(llng_var_max), llng_var_min, llng_var_max, sizeof(ullng_var_max), ullng_var_min, ullng_var_max);

}

// char type on the way...
int main(){
    ALL_ABOUT_INT();
    printf("\n");
    ALL_ABOUT_FLOAT();
	return 0;
}


/* There Maybe Something more than I've provided here!!, if you know then feel free to share & contribute.*/
