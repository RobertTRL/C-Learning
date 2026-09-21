#include <stdio.h>

/*
* °F to °C conversion formula = (9.0 / 5.0 * °C) + 32
*/

int main() {
	float fahr, celcius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;

	while (celcius <= upper) {
		fahr = ((9.0 / 5.0) * celcius) + 32;
		printf("%3.0f %6.1f\n", celcius, fahr);
		celcius += step;
	}
}