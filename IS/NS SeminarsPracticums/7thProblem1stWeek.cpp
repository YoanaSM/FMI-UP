#include<iostream>

int main()
{

	double a, b;
	std::cin >> a >> b;


	 a = a + b;
	 b = a - b;
	 a = a - b;


	std::cout << a << " " << b << std::endl;


	return 0;
}