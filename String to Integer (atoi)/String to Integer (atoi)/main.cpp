#include<iostream>
#include<math.h>
#include "operate.h"
using namespace std;


int myAtoi(char* str)
{
	int length = sizeof(str) / sizeof(str[0]) - 1;
	char *first = FirstNotNullCh(str);
	int sign = 0;
	double integer = 0;
	if (first == nullptr)
		return 0;
	else
	{
		if (isNum(*first) == false && (*first) != '-' && (*first) != '+')
			return 0;
		else if ('-' == *first)
		{
			sign = -1;
			first = (first + 1);
		}
		else if ('+' == *first)
		{
			sign = 1;
			first = (first + 1);
		}
		else
			sign = 1;
		int i = 0;
		char *move = first;
		char *end = nullptr;
		while (isNum(*(move)) == true)
		{
			end = move;
			integer = (int)((*end) - 48) + integer * 10;
			move++;
		}
		integer *= sign;
		if (integer < 0 - pow(2, 31))
			return (int)(0 - pow(2, 31));
		else if (integer > pow(2, 31) - 1)
			return (int)(pow(2, 31) - 1);
		else
			return (int)integer;
	}
	return 0;
}

int main(void)
{
	char str[] = "+1";
	cout << myAtoi(str) << endl;
	return 0;
}