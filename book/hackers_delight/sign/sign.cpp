#include <iostream>

//signum関数

//最適化かけようがかけなかろうが同じ

int main(void)
{

#if 0
	for (int i = 0; i < 10000000; ++i) {
		int x = rand();
		switch ((x>0)-(x<0)) {
			case -1: std::cerr << "x<0" << std::endl; break;
			case 0: std::cerr << "x==0" << std::endl; break;
			case 1: std::cerr << "x>0" << std::endl; break;
		}
	}

#else

	for (int i = 0; i < 10000000; ++i) {
		int x = rand();
		if (x<0) {
			std::cerr << "x<0" << std::endl;
		} else if (x==0) {
			std::cerr << "x==0" << std::endl;
		} else if (x>0) {
			std::cerr << "x>0" << std::endl;
		}
	}

#endif
}

