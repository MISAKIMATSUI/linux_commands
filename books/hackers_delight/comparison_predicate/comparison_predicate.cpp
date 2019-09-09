#include <iostream>
#include <math.h>


int main(void)
{
	float x = 1.0;
	float y = 1.1;
	
	//x == y
	if (fabs(x-y)-1) {
		std::cout << "true" << std::endl;
	} else {
		std::cout << "false" << std::endl;
	}

}
