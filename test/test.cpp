#include <iostream>
#include <signal.h>
#include <fstream>
#include <unistd.h>


void test_handle()
{
	std::cout << "abort" << '\n';
	exit(0);
}

void pwr_handle(std::ofstream& ofs)
{
	while(1) {
		ofs << "abort" << '\n';
	}; 
}


int main(void)
{
	signal(2, test_handle);
	signal(SIGPWR, pwr_handle);
	std::ofstream ofs("result.txt");
	while(1) {
		ofs << "test\n";
		sleep(10);
	} ofs.close();
	
}
