#include<stdio.h>

char s1[] = "this is array.";
char *s2 = "this is pointer";

int main(void)
{
	printf("s1 = 0x%08x\n", (unsigned int)s1);
	printf("&s1 = 0x%08x\n", (unsigned int)&s1);
	printf("s2 = 0x%08x\n", (unsigned int)s2);
	printf("&s2 = 0x%08x\n", (unsigned int)&s2);
	printf("sizeof(s1) = %d\n", sizeof(s1));
	printf("sizeof(s2) = %lu\n", sizeof(s2));

}
