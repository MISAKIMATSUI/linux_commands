#include <iostream>

void swap(int& x, int& y)
{
	x = x^y;
	y = y^x;
	x = x^y;
}

void basic_swap(int& x, int& y)
{
	int tmp = x;
	x = y; 
	x = tmp;
}


void InitRand() {
	srand((unsigned int)time(NULL));
}

void (*fp)(void) __attribute__((section("__DATA,__mod_init_func"))) = InitRand;

int main(int argc, char **argv)
{
	int loop_i = argc > 1 ? atoi(argv[1]) : 30000;
	int loop_j = argc > 2 ? atoi(argv[2]) : 30000;

	for (int i = 0; i < loop_i; ++i) {
		for (int j = 0; j < loop_j; ++j) {
			int x = rand() % 201 - 100;
			int y = rand() % 201 - 100;
			//std::cout << "x = " << x << '\n'
			//	      << "y = " << y << '\n';
			basic_swap(x, y);
			//std::cout << "x = " << x << '\n'
			//	      << "y = " << y << '\n'
			//		  << std::endl;
		}
	}
}
