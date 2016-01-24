#include <iostream>

using namespace std;

int main()
{
  long number = 20;
  bool yeee = false;
  while (yeee == false){
    for(int i=1; i<=20 ; i++){
      if(number%i!=0){
	yeee = false;
	number +=20;
	break;
      }
	yeee = true;
    }
  }
  cout<< number << endl;
  return 0;
  }
