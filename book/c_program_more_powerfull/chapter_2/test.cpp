#include <iostream>

int main(int argc, char** argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int b = argc > 3 ? atoi(argv[3]) : 1;

	switch (argc > 4 ? atoi(argv[4]) : 0) {
		case 0: goto L0; case 1: goto L1; case 2: goto L2;
		case 3: goto L3; case 4: goto L4; case 5: goto L5;
		case 6: goto L6; case 7: goto L7; case 8: goto L8;
		case 9: goto L9;
	}

	do {
	asm("DUMMY1:");
	L0: a += b;
	L1: a += b;
	L2: a += b;
	L3: a += b;
	L4: a += b;
	L5: a += b;
	L6: a += b;
	L7: a += b;
	L8: a += b;
	L9: a += b;
	asm("DUMMY2:");
	} while (--n > 0);
	std::cout << a << std::endl;



}
