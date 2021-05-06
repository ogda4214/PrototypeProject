#include<iostream>

void testPrintf()
{
<<<<<<< HEAD
	std::cout << "Test Infomation" << std::endl;
=======

>>>>>>> 07b1bc88018cbfe6a03c1fbae73765ea90fad6fe
}

int main()
{
	std::cout << "Hello World" << std::endl;

	// Branch Test
	testPrintf();

	std::cin.get();
}