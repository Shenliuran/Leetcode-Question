#pragma once
#include<vector>
using namespace std;

char roman(const int num)
{
	switch (num)
	{
	case 1:return 'I';
	case 5:return 'V';
	case 10:return 'X';
	case 50:return 'L';
	case 100:return 'C';
	case 500:return 'D';
	case 1000:return 'M';

	}
}
int range(int num)
{
	if (num >= 1000)
		return 1000;
	else if (num < 1000 && num >= 100)
		return 100;
	else if (num < 1000 && num >= 10)
		return 10;
	else
		return 1; 
}