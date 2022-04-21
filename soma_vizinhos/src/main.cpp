#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;


int main( void )
{
	int n = 0;
	int m = 0;
	int soma = 0;

	cin >> m;
	cin >> n;


	if (n == 0)
	{
		soma = m;
	}
	else if (n > 0)
	{
		for (int i = m; i < m + n; i++)
			soma = soma + i;
	}
	else if (n < 0)
	{
		for (int i = m; i > m - abs(n); i--)
			soma = soma + i;
	}

	cout << soma << endl;

	return 0;
}
