#include<iostream>
#include "operation.h"
using namespace std;
char** letterCombinations(char* digits, int* returnSize) {
	int length = sizeof(digits) / sizeof(digits[0]) - 1;
	int size = 1;
	for (int i = 0; i < length; i++)
	{
		int conbinSize = 0;
		Dictionary(digits[i], conbinSize);
		size *= conbinSize;
	}
	char **combination = (char**)malloc(sizeof(char*)*size);
	for (int i = 0; i < length; i++)
		combination[i] = (char*)malloc(sizeof(char)*length);
	if (digits[0] == '\0')
		return NULL;
	else
	{

	}
}

int main(void)
{
	char *digits = { '\0' };
	return 0;
}