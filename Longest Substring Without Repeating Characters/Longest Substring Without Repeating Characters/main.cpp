#include<iostream>
using namespace std;
int chMap(const char ch)
{
	return (int)ch;
}
int lengthOfLongestSubstring(char* s) {
	int count = 0;
	int max = 0;
	char *ptrLeft = nullptr, *ptrRight = nullptr;
	ptrLeft = s;
	ptrRight = ptrLeft + 1;
	int strSto[127] = { 0 };
	strSto[chMap(*ptrLeft)]++;
	max = ++count;
	if (*s == '\0')
		return 0;
	else
	{
		while (*ptrLeft != '\0')
		{
			if (strSto[chMap(*ptrLeft)] == 0)
			{
				strSto[chMap(*ptrLeft)]++;
				count++;
			}
			if (strSto[chMap(*ptrRight)] == 0 && *ptrRight != '\0')
			{
				strSto[chMap(*ptrRight)]++;
				count++;
				if (max < count)max = count;
				ptrRight++;
			}
			else
			{
				ptrLeft++;
				memset(strSto, 0, 127 * sizeof(int));
				ptrRight = ptrLeft + 1;
				count = 0;
			}
		}
		return max;
	}
}
int main(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
	cout << lengthOfLongestSubstring(s) << endl;
}