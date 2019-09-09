#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int aaa = 2;

	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
	}
	do {
		asm("DUMMY1:");
		L0:	a *= aaa;
		L1:	a *= aaa;
		L2:	a *= aaa;
		L3:	a *= aaa;
		L4:	a *= aaa;
		L5:	a *= aaa;
		L6:	a *= aaa;
		L7:	a *= aaa;
		L8:	a *= aaa;
		L9:	a *= aaa;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
