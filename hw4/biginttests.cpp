#include <iostream>
#include "bigint.h"
using namespace std;

bool blank()
{
	BigInt bi;
	return (int) bi == 0;
}

bool CreateInt()
{
	BigInt bi(int 12);
	return (int) bi == 12;
}

bool CreateLong()
{
	BigInt bi(LONG_MAX);
	return (long) bi == LONG_MAX;
}

bool copy()
{
	BigInt bi(30);
	BigInt copy(bi);
	return (int) copy == (int) bi;
}

bool PlusNothing()
{
	BigInt bi(10);
	return (int) +bi == (int) bi;
}

bool negation()
{
	BigInt bi(10);
	return -(int) bi == (int) -bi;
}

bool plus()
{
	BigInt bi(100);
	BigInt ci(50);
	BigInt tot = bi + ci;
	return (int) tot == 150;
}

bool plusneg()
{
	BigInt bi(100);
	BigInt ci(-50);
	BigInt tot = bi + ci;
	return (int) tot == 50;
}

bool minus()
{
	BigInt bi(100);
	BigInt ci(50);
	BigInt tot = bi - ci;
	return (int) tot == 50;
}

bool minusneg()
{
	BigInt bi(100);
	BigInt ci(-50);
	BigInt tot = bi - ci;
	return (int) tot == 150;
}

bool minuslarger()
{
	BigInt bi(50);
	BigInt ci(100);
	BigInt tot = bi - ci;
	return (int) tot == -50;
}

bool mult() //accounts for regular mult because this creates it.
{
	BigInt bi(10);
	BigInt ci(20);
	bi *= ci;
	return (int) bi == 200;
}

bool assignment()
{
	BigInt bi(10);
	BigInt ci = bi;
	return (int) ci == 10;
}

bool multneg()
{
	BigInt bi(10);
	BigInt ci(-20);
	bi *= ci;
	return (int) bi == -200;
}


bool equality()
{
	BigInt bi(10);
	BigInt ci(10);
	return ci == bi;
}

bool lessthan() //All other comparisons are included by association.
{
	BigInt bi(10);
	BigInt ci(20);
	return bi < ci;
}

bool plusplus() 
{
  BigInt bi(5);
  bi++;
  ++bi;
  return (int) bi == 7;
}

bool minusminus() {
  BigInt bi(5);
  bi--;
  --bi;
  return (int) bi == 3;
}

int main() {
	cout << blank() << endl;
	cout << CreateInt() << endl;
	cout << CreateLong() << endl;
	cout << copy() << endl;
	cout << PlusNothing() << endl;
	cout << negation() << endl;
	cout << plus() << endl;
	cout << plusneg() << endl;
	cout << minus() << endl;
	cout << minusneg() << endl;
	cout << equality() << endl;
	cout << minuslarger() << endl;
	cout << lessthan() << endl;
	cout << plusplus() << endl;
	cout << minusminus() << endl;
	cout << assignment() << endl;
	return 0;
}