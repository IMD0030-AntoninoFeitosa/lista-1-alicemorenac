#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int m, n, soma;
  while(cin >> std::ws >> m >> n){
    soma = 0;
    if(n > 0){
      for(int i=0;i<n;i++){
        soma += m;
        m++;
      }
    } else if(n < 0){
      for(int i=0;i<-n;i++){
        soma += m;
        m--;
      }
    } else {
      soma = m;
    }
    cout << soma << endl;
  }
  return 0;
}

