#define GOOGLE_STRIP_LOG 1
#include<iostream>
#include<glog/logging.h>
#include<gflags/gflags.h>
#include<pthread.h>
#include<unistd.h>

void threadFunc1()
{
		LOG(INFO) << __func__;
		exit(0);
}

void threadFunc2()
{
		//LOG(INFO) << __func__;
		exit(0);
}



int main(int argc, char** argv)
{
	google::InitGoogleLogging(argv[0]);
	google::InstallFailureSignalHandler();
	google::ParseCommandLineFlags(&argc, &argv, false);
	threadFunc1();
	threadFunc2();
	return 0;
}
