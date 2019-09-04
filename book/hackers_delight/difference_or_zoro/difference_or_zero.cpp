#include <iostream>

//bitのほうが最適化してもわずかに速い

//int doz(int x, int y) {
//	if (x >= y) {
//		return x-y;
//	} else {
//		return 0; 
//	}
//}

constexpr int Doz(int x, int y) {
	return (x-y) & (~((x-y)^((x^y)&((x-y)^x))) >> 31);
}

constexpr int max(int x, int y) {
	return y + Doz(x, y);
}

constexpr int min(int x, int y) {
	return x - Doz(x, y);
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
			std::cout << "x = " << x << '\n'
				      << "y = " << y << '\n'
					  << "result = " << Doz(x, y) << '\n'
					  << "max = " << max(x, y) << '\n'
					  << "min = " << min(x, y) << '\n'
					  << std::endl;
		}
	}
}
