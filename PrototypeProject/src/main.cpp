#include<iostream>

void testPrintf()
{
	std::cout << "Test Infomation!" << std::endl;
}

int main()
{
	std::cout << "Hello World" << std::endl;

	testPrintf();

	std::cin.get();
}