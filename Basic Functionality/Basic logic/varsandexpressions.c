#include <stdio.h>

//- How do you make comments in C?
//  In C, you can make comments using two methods:
//  1. Single-line comments: Use two forward slashes (//) to comment a single line.
//  2. Multi-line comments: Use /* to start the comment and */ to end it. This can span multiple lines. 

/*
- In C, variables must be declared before they are used
- Declarations consists of a type and a name, and optionally an initial value

  Examples:
	int x; // declares an integer variable named x
	int x = 5; // declares an integer variable named x and initializes it to 5
	int x, y, z; // declares three integer variables named x, y, and z

Basic data types in C:
	int: for integers
	float: for floating-point numbers
	char: for single byte characters (1 byte = 8 bits) e.g 'a', 'b', 'c'
	short: for short integers (typically 2 bytes)
	long: for long integers (typically 4 bytes)
	double: for double-precision floating-point numbers (typically 8 bytes)

- In C, single statements are terminated with a semicolon (;)
*/

int demo() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;

	/*
		Note that the °C to °F conversion formula used here is 5 * (°F - 32) / 9, 
		instead of the typical 5 / 9 * (°F - 32). This is because in C, 
		the division of two integers results in a floor division to get an integer result. 
		Therefore, 5 / 9 would evaluate to 0, which is not the desired outcome.

		If one wants to use the typical formula, they can use 5.0 / 9.0 * (°F - 32) 
		to ensure that the division is done in floating-point arithmetic, which would yield a 
		more accurate result.

		If an arithmetic operator has integer operands, an integer operation is performed. 
		If an arithmetic operator has one floating-point operand and one integer operand, 
		however, the integer will be converted to floating point before the operation is done.
	*/

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
