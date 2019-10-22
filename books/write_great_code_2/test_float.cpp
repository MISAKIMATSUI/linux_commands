#include <iostream>

int main(void)
{
	static int j;
	static float i = 5.0;
	static float a[8] = {0,1,2,3,4,5,6,7};


	j  = 0;
	a[j] = i + 3.0f;

}

