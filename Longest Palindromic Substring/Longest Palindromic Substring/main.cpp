#include<iostream>
using namespace std;
char* longestPalindrome(char* s) {
	char *ptrFront, *ptrEnd;
	int len = sizeof(s) / sizeof(*s) - 1;
	ptrFront = s;
	ptrEnd = s + len;
	char *head = nullptr, *tail = nullptr;
	while (ptrFront != ptrEnd)
	{
		if (*ptrFront != *ptrEnd)
		{
			ptrFront++;
			if (*ptrFront != *ptrEnd)
				ptrEnd++;
			else
			{
				head = ptrFront;
				tail = ptrEnd;
			}
		}
		else
		{
		}
	}
}

int main(void)
{
	return 0;
}