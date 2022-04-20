#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(void)
{
	int x;
	int nDados = 0;
	int inter1 = 0;
  int inter2 = 0;
  int inter3 = 0;
  int inter4 = 0;
  int interOut = 0;
  	
	while( cin >> std::ws >> x) {
    nDados++;
    
    if(x >= 0 && x < 25)
    {
      inter1++;
    } else if(x >= 25 && x < 50)
    {
      inter2++;
    } else if(x >= 50 && x < 75)
    {
      inter3++;
    } else if(x >= 75 && x < 100)
    {
      inter4++;
    } else 
    {
      interOut++;
    }
  }

	cout << std::setprecision(4) << (inter1*100.0)/ (nDados) << endl;

	cout << std::setprecision(4) << (inter2*100.0)/(nDados) << endl;

	cout << std::setprecision(4) << (inter3*100.0)/(nDados) << endl;

	cout << std::setprecision(4) << (inter4*100.0)/(nDados) << endl;

	cout << std::setprecision(4) << (interOut*100.0)/(nDados) << endl;

	return 0;

}

