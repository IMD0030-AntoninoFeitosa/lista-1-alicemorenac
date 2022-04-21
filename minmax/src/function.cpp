#include "function.h"


std::pair<int,int> min_max( int V[], std::size_t n )
{
  int indice_min = -1;
  int indice_max = -1;
  for(int i=0;i<n;i++){
    if(indice_min == -1 || V[i] < V[indice_min]){
      indice_min = i;
    }
    if(indice_max == -1 || V[i] >= V[indice_max]){
      indice_max = i;
    }
  }
  return std::make_pair(indice_min, indice_max);
}
