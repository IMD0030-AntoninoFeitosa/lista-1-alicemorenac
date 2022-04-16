#include "function.h"


std::pair<int, int> min_max(int V[], size_t n)
{
	int min = V[0];
	int max = V[0];

	int min_indice = 0;
	int max_indice = 0;
		
	if (n == 0)
	{
		return  std::make_pair(-1, -1);
	}
	
	for (int i = 0; i < n; i++)
	{
		if(V[i] < min)
		{
			min = V[i];
			min_indice = i;
		}
		if (V[i] >= max)
		{
			max = V[i];
			max_indice = i;
		}
	}

	return std::make_pair(min_indice, max_indice);
}
