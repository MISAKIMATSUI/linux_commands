#include <iostream>

int TransfarOfSign(int x, int y)
{
	int t = y >> 31;
	return (abs(x)^t) - t; 
}

int IfAbs(int x, int y)
{
	return y < 0 ? -abs(x) : abs(x);
}


int main(void)
{
	for (int i = 0; i < 100000000; ++i) {
		unsigned int now = (unsigned int)time(0);
		srand(now);
		int y = rand() % 201 - i;
		int x = rand() % 201 - i;
		int t = IfAbs(x, y);
		//int t = TransfarOfSign(x,y);
	}

}
