#include <stdio.h>

void main() {
	int fahr;

	for (fahr = 300; fahr >=0; fahr -= 20) {
		float celsius = (5.0/9.0) * (fahr-32);
		printf("%3d\t%6.1f\n", fahr, celsius);
	}
}
