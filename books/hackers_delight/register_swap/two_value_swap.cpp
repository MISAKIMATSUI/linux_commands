#include <iostream>

void swap(bool& x, bool a, bool b)
{
	x = a + b - x;
}

void basic_swap(bool& x, bool a, bool b)
{
	if (x == a) {
		x = b;
	}
	else {
		x = a;
	}
}


void InitRand() {
	srand((unsigned int)time(NULL));
}

void (*fp)(void) __attribute__((section("__DATA,__mod_init_func"))) = InitRand;

int main(int argc, char **argv)
{
	int loop_i = argc > 1 ? atoi(argv[1]) : 40000;
	int loop_j = argc > 2 ? atoi(argv[2]) : 40000;

	for (int i = 0; i < loop_i; ++i) {
		for (int j = 0; j < loop_j; ++j) {
			bool x = rand() % 2;
			bool a = rand() % 2;
			bool b = rand() % 2;
			//std::cout << "x = " << x << '\n'
			//	      << "a = " << a << '\n'
			//	      << "b = " << b << '\n';
			basic_swap(x, a, b);
			//std::cout << "x = " << x << '\n'
			//	      << "a = " << a << '\n'
			//	      << "b = " << b << '\n'
			//		  << std::endl;
		}
	}
}
