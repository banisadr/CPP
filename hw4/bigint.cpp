#include <iostream>
#include <cmath>
#include <climits>
#include "bigint.h"

using namespace std;

BigInt::BigInt() //constructor
{
	for(int i = 0; i <=99; i++)
	{
		digits[i] = 0;
	}
	negative = false;
}

BigInt::BigInt(int n) //constructor with inital value n
{
	negative = false;
	if(n != abs(n)){
		negative = true;
		n = abs(n);
	}
	for(int i = 99; i>=0; i--)
	{
		digits[i] = n%10;
		n = n / 10;
	}
}

BigInt::BigInt(long n) //contructor with intital long value n
{
	negative = false;
	if(n != abs(n)){
		negative = true;
		n = abs(n);
	}
	for(int i = 99; i>=0; i--)
	{
		digits[i] = n%10;
		n = n / 10;
	}
}

BigInt::BigInt(const BigInt& bi) //Coppies value
{
	for(int i = 0; i>=99; i++)
	{
		digits[i] = bi.digits[i];
	}
	negative = bi.negative;
}

BigInt BigInt::operator+() const //Does nothing
{
	return *this;
}

BigInt BigInt::operator-() const //negation
{
	BigInt mycopy(*this);
	mycopy.negative = !negative;
	return mycopy;
}

BigInt BigInt::operator+(const BigInt& bi) const //Addition
{
	BigInt sum(*this);
	sum += bi;
	return sum;
}

BigInt BigInt::operator-(const BigInt& bi) const //subtraction
{
	BigInt difference(*this);
	difference -= bi;
	return difference;
}

BigInt BigInt::operator*(const BigInt& bi) const //multiplication
{
	BigInt product(*this);
	product *= bi;
	return product;
}


void BigInt::operator=(const BigInt& bi) //Assignment
{
	for(int i = 99; i>=0; i--)
	{
		digits[i] = bi.digits[i];
	}
}


void BigInt::operator+=(const BigInt& bi) //Additon
{
	if(negative == bi.negative) //if same sign
	{
		for(int i = 99; i>=0; i--)
		{
			digits[i] += bi.digits[i];
			if(digits[i]>9) //If a cell in the array is over acceptable value
			{
				digits[i-1] += digits[i]/10; //move extra to next cell
				digits[i] = digits[i]%10; //and keep amount under 10
			}
		}
	}
	else //if not same sign
	{
		bool ThisIsBigger = true;
		for(int i = 99; i>=0; i--) //Determines greater number. If *this is greater; then true
		{
			if(digits[i]<bi.digits[i]) /*The greater number will prevail in final answer.
			the number with the highest place value will prevail; and if they ahve the same
			highest place value; the greater number will still prevail*/
			{
				ThisIsBigger = false;
			}

			else if(digits[i]>bi.digits[i])
			{
				ThisIsBigger = true;
			}
		}

		if(!ThisIsBigger) //switches sign of *this if it is smaller
		{
			negative = !negative;
		}

		for(int i = 99; i>=0; i--)
		{
			if(ThisIsBigger) //case if *this is bigger
			{
				digits[i] -= bi.digits[i];
				if(digits[i]<0) //If a cell in the array is negative
				{
					digits[i-1] -= 1; //borrows from next cell
					digits[i] += 10; //and adds to undervalue cell
				}
			}
			else //case if this is smaller. Subtract *this from bi
			{
				digits[i] = bi.digits[i] - digits[i];
				if(digits[i]<0) //If a cell in the array is negative
				{
					digits[i-1] += 1; //borrows from next cell. Adds 1 to this rather than subtracting 1 from bi because cannot access bi.
					digits[i] += 10; //and adds to undervalue cell
				}
			}
		}
	}
}

void BigInt::operator-=(const BigInt& bi) //Subtraction. Same as addition with opposite sign handling.
{
	if(negative != bi.negative) //if not same sign
	{
		for(int i = 99; i>=0; i--)
		{
			digits[i] += bi.digits[i];
			if(digits[i]>9) //If a cell in the array is over acceptable value
			{
				digits[i-1] += digits[i]/10; //move extra to next cell
				digits[i] = digits[i]%10; //and keep amount under 10
			}
		}
	}
	else //if same sign
	{
		bool ThisIsBigger = true;
		for(int i = 99; i>=0; i--) //Determines greater number. If *this is greater; then true
		{
			if(digits[i]<bi.digits[i]) /*The greater number will prevail in final answer.
			the number with the highest place value will prevail; and if they ahve the same
			highest place value; the greater number will still prevail*/
			{
				ThisIsBigger = false;
			}

			else if(digits[i]>bi.digits[i])
			{
				ThisIsBigger = true;
			}
		}

		if(!ThisIsBigger) //switches sign of *this if it is smaller
		{
			negative = !negative;
		}

		for(int i = 99; i>=0; i--)
		{
			if(ThisIsBigger) //case if *this is bigger
			{
				digits[i] -= bi.digits[i];
				if(digits[i]<0) //If a cell in the array is negative
				{
					digits[i-1] -= 1; //borrows from next cell
					digits[i] += 10; //and adds to undervalue cell
				}
			}
			else //case if this is smaller. Subtract *this from bi
			{
				digits[i] = bi.digits[i] - digits[i];
				if(digits[i]<0) //If a cell in the array is negative
				{
					digits[i-1] += 1; //borrows from next cell. Adds 1 to this rather than subtracting 1 from bi because cannot access bi.
					digits[i] += 10; //and adds to undervalue cell
				}
			}
		}
	}
}

void BigInt::operator*=(const BigInt& bi) //Multiplication.
{
	if(negative == bi.negative)
	{
		negative = false;
	}
	else
	{
		negative = true;
	}
	int holding[100];
	for(int i = 0; i<100; i++)
	{
		for(int j = 99; i>=0; i--)
		{
			holding[j] = digits[j] * bi.digits[99-i] * 10^(i);
		}
		
	}
	for(int i = 99; i>=0; i--)
	{
		if(holding[i]>9)
		{
			holding[i-1] += holding[i]/10;
			digits[i] = holding[i]%10;
		}
	}
}


bool BigInt::operator==(const BigInt& bi) const
{
	bool same = true;
	for(int i = 99; i>=0; i--)
	{
		if(digits[i] != bi.digits[i])
		{
			same = false;
		}
	}
	if(negative != bi.negative)
	{
		same = false;
	}
	return same;
}

bool BigInt::operator!=(const BigInt& bi) const
{
	return !(*this==bi);
}

bool BigInt::operator<(const BigInt& bi) const
{
	bool ThisIsBigger = false;
	for(int i = 99; i>=0; i--) //Determines greater number. If *this is greater; then true
	{
		if(digits[i]<bi.digits[i])
		{
			ThisIsBigger = false;
		}
		else if(digits[i]>bi.digits[i])
		{
			ThisIsBigger = true;
		}
	}
	return !ThisIsBigger;
}


bool BigInt::operator<=(const BigInt& bi) const
{
	if( *this==bi || *this<bi)
	{
		return true;
	}
	return false;
}


bool BigInt::operator>(const BigInt& bi) const
{
	return !(*this < bi);
}


bool BigInt::operator>=(const BigInt& bi) const
{
	if( *this==bi || *this > bi)
	{
		return true;
	}
	return false;
}


void BigInt::operator++()
{
	BigInt one = BigInt(1);
	*this += one;
}


void BigInt::operator--()
{
	BigInt one = BigInt(1);
	*this -= one;
}


void BigInt::operator++(int)
{
	BigInt one = BigInt(1);
	*this += one;
}

void BigInt::operator--(int)
{
	BigInt one = BigInt(1);
	*this -= one;
}

BigInt::operator int() const
{
	long sum = 0;
	for(int i = 99; i>=0; i--)
	{
		sum += (long) digits*10^(i);
	}
	if(negative)
	{
		sum *= -1;
	}
	if(sum > INT_MAX || sum < INT_MIN)
	{
		return 0;
	}
	return (int) sum;
}

BigInt::operator long() const
{
	long sum = 0;
	for(int i = 99; i>=0; i--)
	{
		sum += (long) digits*10^(i);
	}
	if(negative)
	{
		sum *= -1;
	}
	if(sum > LONG_MAX || sum < LONG_MIN)
	{
		return 0;
	}
	return sum;
}

ostream& operator<<(ostream& out, const BigInt& bi)
{
	if(bi.negative)
	{
		out << "-";
	}
	bool start = true;
	for (int i = 0; i < 100; i++)
	{
		while (bi.digits[i] == 0 && start && i != 99)
		{
			i ++;
		}
		start = false;
		out<<bi.digits[i];
	}
	return out;
}