#include <iostream>

#define test 10

int main(int argc, char** argv)
{
	int loop = argc > 1 ? atoi(argv[1]) : 1000000;
	int* array = (int*)malloc(sizeof(int) * loop);
	for (int i = 0; i < loop; ++i) {
		array[i] = test;
	}
}



