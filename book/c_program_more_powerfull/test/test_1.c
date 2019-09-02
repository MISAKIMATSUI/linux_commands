#include <stdlib.h>
#include <stdio.h>
#include <float.h>

#define x(n)	case n: goto L ## n

int main(int argc, char **argv)
{
	double a = 1;
	float count = 0;
	for (int i = 1; i < 104010; ++i) {
		for (int j = 1; j < 181030; ++j) {
			a *= i * j;
			count++;
		}
	}

	printf("a = %f\n", a);
	printf("count = %f\n", count);
	return 0;
}
