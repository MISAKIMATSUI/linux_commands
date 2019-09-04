#include <iostream>


int main(void)
{
#if 0
	float out = 30;
	for (float i =0; i < 100000; ++i) {
		for (float j =0; j < 100000; ++j) {
			out *= i * j;
		}
	}

#else
	double result= 30;
	for (double i =0; i < 100000; ++i) {
		for (double j =0; j < 100000; ++j) {
			result *= i * j;
		}
	}
#endif


}
