#include<iostream>

void testPrintf()
{
	std::cout << "Test Infomation" << std::endl;
}

int main()
{
	std::cout << "Hello World" << std::endl;

	// Branch Test
	testPrintf();

	std::cin.get();
}