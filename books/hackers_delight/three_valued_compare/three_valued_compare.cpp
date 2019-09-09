#include <iostream>

//signum関数

//最適化かけようがかけなかろうが同じ

int main(void)
{

#if 0
	for (int i = 0; i < 10000000; ++i) {
		int x = rand();
		int y = rand();
		switch ((x>y)-(x<y)) {
			case -1: std::cerr << "x<y" << std::endl; break;
			case 0: std::cerr << "x==y" << std::endl; break;
			case 1: std::cerr << "x>y" << std::endl; break;
		}
	}

#else

	for (int i = 0; i < 10000000; ++i) {
		int x = rand();
		int y = rand();
		if (x<y) {
			std::cerr << "x<y" << std::endl;
		} else if (x==y) {
			std::cerr << "x==y" << std::endl;
		} else if (x>y) {
			std::cerr << "x>y" << std::endl;
		}
	}

#endif
}

