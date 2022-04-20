#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5;

int main(void)
{
  int value, count = 0;
  for(int i=0;i<SIZE;i++){
    cin >> std::ws >> value;
    if(value < 0){
      count++;
    }
  }
  cout << count;
  return 0;
}

