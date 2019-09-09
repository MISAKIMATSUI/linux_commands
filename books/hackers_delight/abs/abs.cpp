#include <iostream>

//絶対値関数
//
//最適化かけてもかけなくても実行速度は同じだった

int main()
{

	for (int i = 0; i < 100000000; ++i) {
		unsigned int now = (unsigned int)time(0);
		srand(now);
		int x = rand() % 201 - i;
#if 1 
		int out = ((x>>30) | 1) * x;
#else 
		int out = abs(x);
#endif
		//std::cout << "x = " << x << ", out = " << out << std::endl;
	}

}
