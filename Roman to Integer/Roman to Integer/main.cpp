
#include<iostream>
#include "explanation.h"

using namespace std;
int romanToInt(char* s)
{
	int integer = 0;
	char *ptrLeft = NULL, *ptrRight = NULL;
	ptrLeft = s;
	ptrRight = s + 1;
	while (*ptrLeft)
	{
		if (isSpecialCom(*ptrLeft, *ptrRight))
		{
			integer += specialTran(*ptrLeft, *ptrRight);
			ptrLeft += 2;
			ptrRight += 2;
		}
		else if (isSpecialCom(*ptrRight, *(ptrRight + 1)))
		{
			integer += tran(*ptrLeft) + specialTran(*ptrRight, *(ptrRight + 1));
			ptrLeft += 3;
			ptrRight += 3;
		}
		else
		{
			integer += tran(*ptrLeft) + tran(*ptrRight);
			ptrLeft += 2;
			ptrRight += 2;
		}
		if (*ptrLeft == '\0')
			return integer;
		else if (*ptrRight == '\0')
			return integer + tran(*ptrLeft);
		else
			continue;
	}
}
int main(void)
{
	char roman[] = "D";
	cout << romanToInt(roman) << endl;
	return 0;
}