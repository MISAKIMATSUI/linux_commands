#include <stdio.h>
#include <stdlib.h>

int count = 0;

void init1()
{
	count++;
	printf("init1\n");
}

void init2()
{
	count++;
	count++;
	printf("init2\n");
}


//void (*fp1)(void) __attribute__((section("__DATA, .mod_init_func"))) = init1;
void (*fp1)(void) __attribute__((section("__DATA,__mod_init_func"))) = init1;

int main(void)
{

	printf("%d", count);

}
