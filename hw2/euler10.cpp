#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
  long number = 4;
  long sum = 5;
  while(number < 2000000){
    for (long i=2;i<=(int)sqrt(number);i++){
      if(number%i == 0){
	number++;
	break;
      }if(i>=(int)sqrt(number)){
	sum+=number;
	number++;
      }
    }
  }
  cout<<sum<<endl;
  return 0;
}
