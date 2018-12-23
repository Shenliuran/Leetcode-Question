#include<iostream>
using namespace std;

int reverse(int x)
{
	double rev = 0;
	int quotient;
	int remainder;
	int sign = 0;
	if (x < 0)
	{
		sign = -1;
		x = -x;
	}
	else
		sign = 1;
	if ((quotient = x / 10) == 0)
		return sign * x;
	else
	{
		do
		{
			remainder = x % 10;
			rev = rev * 10 + (double)remainder * 10;
			x = x / 10;
		} while (x);
		rev = (double)sign * (rev / 10);
		if (rev < -1 * pow(2, 31) || rev >(pow(2, 31) - 1))
			return 0;
		else
			return rev;
	}
}

int main(void)
{
	int num;
	cout << "typing the number:" << endl;
	cin >> num;
	cout << "the reverse number is:" << reverse(num) << endl;
	return 0;

}