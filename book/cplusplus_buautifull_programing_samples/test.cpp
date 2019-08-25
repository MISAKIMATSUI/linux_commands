#include <iostream>


namespace {
#define x(n)	case n: goto L ## n

class Calc {
	public: Calc() : cnt_(3) {};
	public: Calc(int n) : cnt_(n) {};
	public: void CalcTest(int n);
	private: 
	const int cnt_;
};

void Calc::CalcTest(int n)
{
	int a = (n % 2 == 0) ? 1 : 0;
	switch (n % 10) {
		 x(0);  x(1);  x(2);  x(3);  x(4); 
	}
	L0: a *= 3;
	L1: a *= 3;
	L2: a *= 3;
	L3: a *= 3;
	L4: a *= 3;
}
} // namespaxe


int main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 10000;
	Calc *calc = new Calc();
	for (long int i = 0; i < 1000000000; ++i) {
		calc->CalcTest(i);
	}
	delete calc;

}
