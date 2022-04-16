#include <iostream>
#include <array>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
	std::array <int, SIZE> num {};
	int Neg = 0;


	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> num[i];

		if (num[i] < 0)
		{
			Neg = Neg++;
		}
	}

	std::cout << Neg << std::endl;

	system("PAUSE");

	return 0;
}


