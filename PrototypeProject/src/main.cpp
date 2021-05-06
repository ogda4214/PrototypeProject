#include<iostream>
#include"BranchTest.h"


void testPrintf()
{
	std::cout << "Test Infomation!" << std::endl;
}

int main()
{
	std::cout << "Hello World" << std::endl;

	testPrintf();

	BranchPrintf();

	std::cin.get();
}