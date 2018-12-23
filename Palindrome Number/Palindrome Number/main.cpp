#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

bool isPalindrome(int x)
{
	if (x < 0)
		return false;
	else
	{
		double double_x = (double)x;
		double rev = 0;
		double remainder;
		while (x)
		{
			remainder = (double)(x % 10);
			rev = remainder * 10 + rev * 10;
			x = x / 10;
		}
		rev /= 10;
		if (rev == double_x)
			return true;
		else
			return false;
	}
}


int main(void)
{
	int x;
	cout << "typing the number:" << endl;
	cin >> x;
	if (isPalindrome(x))
		cout << "it is palindrome!!!" << endl;
	else
		cout << "it is NOT palindrome!!!" << endl;
	return 0;

}