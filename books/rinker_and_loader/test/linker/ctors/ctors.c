#include <stdio.h>
#include <stdlib.h>
int count = 0;

void init1()
{
	count++;
	printf("mod_init\n");
}

void init2()
{
	count++;
	printf("constructor\n");
}

void end1()
{
	count++;
	printf("mod_term\n");
}

void end2()
{
	count++;
	printf("_destructer\n");
}


//void (*fp1)(void) __attribute__((section("__TEXT,__constructor"))) = init2;
//void (*fp2)(void) __attribute__((section("__TEXT,__destructor"))) = end2;
void (*fp3)(void) __attribute__((section("__DATA,__mod_init_func"))) = init1;
void (*fp4)(void) __attribute__((section("__DATA,__mod_term_func"))) = end1;
int main(void)
{
	printf("%d", count);
	exit(1);
}
