#include<iostream>
#include<glog/logging.h>
#include<pthread.h>
#include<unistd.h>

void* threadFunc(void *arg)
{
	for (int i = 0; i < 100000; ++i) {
		std::cout << __func__ << ":" << i << '\n';
		sleep(1);
	}
	return nullptr;
}


int main(int argc, char** argv)
{
	google::InitGoogleLogging(argv[0]);
	google::InstallFailureSignalHandler();

	pthread_t thread;
	pthread_t thread1;
	pthread_t thread2;
	pthread_t thread3;
	pthread_t thread4;
	pthread_t thread5;
	pthread_t thread6;
	pthread_t thread7;
	pthread_t thread8;
	pthread_t thread9;
	pthread_t thread10;
	pthread_t thread11;
	pthread_t thread12;
	int i;
	if(pthread_create(&thread, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread1, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread2, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread3, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread4, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread5, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread6, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread7, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread8, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread9, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}
	if(pthread_create(&thread10, NULL, threadFunc, NULL) != 0) {
		LOG(FATAL) << "fail to create new thread";
	}

	for (int i = 0; i < 500000000; ++i) {
		std::cout << __func__ << ":" << i << '\n';
		sleep(1);
	}

	return 0;
}
