#include <ctype.h>
/* atof: convert string s to double */

double exercise(char s[]) {

	double val, power, exp_result = 1.0;
	int i, sign, exp_sign, exp_val;

	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-')
		i++;

	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');

	if (s[i] == '.')
		i++;

	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	if (s[i] == 'e' || s[i] == 'E') {
		i++;
	}

	exp_sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-')
		i++;

	for (exp_val = 0; isdigit(s[i]); i++)
		exp_val = 10 * exp_val + (s[i] - '0');

	for (int j = 0; j < exp_val; j++) {
		exp_result *= 10;
	}

	if (!exp_sign) {
		exp_result = 1 / exp_result;
	}

	return sign * val / power * exp_result;
}