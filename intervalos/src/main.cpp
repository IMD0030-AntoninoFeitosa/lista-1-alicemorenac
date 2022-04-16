#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;


int main(void)
{
	int x = 0;
	int nDados = 0;
	std::vector <int> inter = { 0,0,0,0,0 };
	std:: vector <double> porcent = { 0,0,0,0,0};

	while (std::cin >> std::ws >> x)
	{

		if (x >= 0 && x < 25)
		{
			inter[0]++;
		}
		else if (x >= 25 && x < 50)
		{
			inter[1]++;
		}
		else if (x >= 50 && x < 75)
		{
			inter[2]++;
		}
		else if (x >= 75 && x < 100)
		{
			inter[3]++;
		}
		else
		{
			inter[4]++;
		}

		nDados = nDados++;
	}

	porcent[0] = (inter[0] / static_cast<double> (nDados)) * 100;
	porcent[1] = (inter[1] / static_cast<double> (nDados)) * 100;
	porcent[2] = (inter[2] / static_cast<double> (nDados)) * 100;
	porcent[3] = (inter[3] / static_cast<double> (nDados)) * 100;
	porcent[4] = (inter[4] / static_cast<double> (nDados)) * 100;

	std::cout << std::setprecision(4) << porcent[0] << std::endl;

	std::cout << std::setprecision(4) << porcent[1] << std::endl;

	std::cout << std::setprecision(4) << porcent[2] << std::endl;

	std::cout << std::setprecision(4) << porcent[3] << std::endl;

	std::cout << std::setprecision(4) << porcent[4] << std::endl;

	return 0;

}
