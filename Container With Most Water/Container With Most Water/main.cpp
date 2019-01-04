#include<iostream>
using namespace std;
int maxArea(int* height, int heightSize)
{
	int max = 0;
	for (int i = 0; i < heightSize - 1; i++)
	{
		for (int j = i + 1; j < heightSize; j++)
		{
			int minOfTwo = height[i] < height[j] ? height[i] : height[j];
			if (max < minOfTwo * (j - i))
				max = minOfTwo * (j - i);
		}
	}
	return max;
}

int area(int *front, int *end)
{
	int a = (int)(end - front) * ((*front) < (*end) ? (*front) : (*end));
	return a;
}
int maxArea2(int* height, int heightSize)
{
	int length = heightSize - 1;
	int max1 = area(height, height + length);
	int	max2 = area(height, height + length - 1);
	int	max3 = area(height + 1, height + length);
	int max = (max1 > max2 ? max1 : max2) > max3 ? (max1 > max2 ? max1 : max2) : max3;
	int record = max;
	if (max <= max1)
		return maxArea2(height, length);
	else if (max <= max2)
		return maxArea2(height, length - 1);
	else if (max <= max3)
		return maxArea2(height + 1, length);
	else
		return ;
}
int main(void)
{
	int a[7] = { 2,3,10,5,7,8,9 };
	cout << maxArea(a, 7) << endl;
	cout << maxArea2(a, 7) << endl;
	return 0;
}