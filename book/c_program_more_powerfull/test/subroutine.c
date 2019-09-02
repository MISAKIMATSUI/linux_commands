#include <stdio.h>



void subroutine1(int aa, float bb, float cc, char* p){
	int a = aa;
	printf("%s", p);
}

void subroutine2(int aa, float bb, float cc, char* p){
	int a = aa;
}


int main(void)
{
	int aa = 11111;
	double bb = 33333333;
	double cc = 444444444;
	char* p = "test";
	subroutine1(aa, bb, cc, p);

}
