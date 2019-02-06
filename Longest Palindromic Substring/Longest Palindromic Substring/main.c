#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestPalindrome(char* s) {
	char *ptrFront = NULL, *ptrEnd = NULL;
	char *ptrFlagBegin = NULL, *ptrFlagEnd = NULL;
	char *ptrTemp = NULL;
	struct Record
	{
		char *ptrRecordBegin, *ptrRecordEnd;
		int len;
	};
	//struct Record *recordArr = (struct Record*)malloc(sizeof(struct Record) * 1000);
	struct Record recordArr[10000] = { 0 };
	if (*s == '\0')
	{
		char *a = "";
		return a;
	}
	else
	{
		ptrEnd = s + strlen(s) - 1;
		ptrFront = s;
		int count = 0;
		int j = 0;
		if (*(ptrFront + 1) == '\0')
		{
			return ptrFront;
		}
		else
			while (ptrFront != s + strlen(s) - 1)
			{
				if (*ptrFront == *ptrEnd)
				{
					ptrFlagBegin = ptrFront;
					ptrFlagEnd = ptrEnd;
					while (ptrFront <= ptrEnd)
					{
						if (*ptrFront == *ptrEnd)
						{
							ptrFront++; ptrEnd--;
							if (ptrFront >= ptrEnd)
							{
								recordArr[count].ptrRecordBegin = ptrFlagBegin;
								recordArr[count].ptrRecordEnd = ptrFlagEnd;
								recordArr[count].len = (int)(ptrFlagEnd - ptrFlagBegin + 1);
								count++;
								break;
							}
						}
						else break;
					}
					ptrFront = ptrFlagBegin;
					//ptrEnd = s + strlen(s) - 1;
					ptrEnd = ptrFlagEnd - 1;
				}
				else ptrEnd--;
				if (ptrEnd == ptrFront)
				{
					ptrFront++;
					ptrEnd = s + strlen(s) - 1;
				}
			}

		struct Record temp;
		temp.len = 0;
		for (int i = 0; i <= count; i++)
		{
			if (temp.len <= recordArr[i].len)
				temp = recordArr[i];
		}
		char *dest = (char*)malloc(sizeof(char) * 1000);
		strncpy_s(dest, temp.len + 1, temp.ptrRecordBegin, temp.len);
		return dest;
	}
	return NULL;
}
int main(void)
{
	char s[] = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababa";
	printf("%s\n", s);
	printf("%s\n", longestPalindrome(s));
	return 0;
}