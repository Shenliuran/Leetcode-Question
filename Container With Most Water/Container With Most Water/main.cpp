#include<iostream>
#include "operation.h"
using namespace std;
//int maxArea(int* height, int heightSize)
//{
//	int max = 0;
//	for (int i = 0; i < heightSize - 1; i++)
//	{
//		for (int j = i + 1; j < heightSize; j++)
//		{
//			int minOfTwo = height[i] < height[j] ? height[i] : height[j];
//			if (max < minOfTwo * (j - i))
//				max = minOfTwo * (j - i);
//		}
//	}
//	return max;
//}
//int maxArea2(int* height, int heightSize)
//{
//	int length = heightSize - 1;
//	int ptrFront = 0, ptrEnd = heightSize - 1;
//	int max = 0;
//	while (ptrFront != ptrEnd)
//	{
//		int whole = area(height + ptrFront, height + ptrEnd);
//		int left = area(height + ptrFront, height + ptrEnd - 1);
//		int right = area(height + ptrFront + 1, height + ptrEnd);
//		if (max < maxOfThree(whole, left, right))
//			max = maxOfThree(whole, left, right);
//		if (max == whole)
//		{
//			if (left > right)
//				ptrEnd--;
//			else
//				ptrFront++;
//		}
//		else if (max == left)
//			ptrEnd--;
//		else
//			ptrFront++;
//	}
//	return max;
//}
int maxArea(int *height, int heightSize)
{
	int m = 0;
	int i = 0, j = heightSize - 1;
	while (i != j)
	{
		int s1 = min2(height[j], height[i])*(j - i);
		int s2 = min2(height[i], height[j - 1])*(j - i - 1);
		int s3 = min2(height[i + 1], height[j])*(j - i - 1);
		int s = maxOfThree(s1, s2, s3);
		if (m < s) m = s;
		if (m == s2) j--;
		else if (m == s3) i++;
		else
		{
			s = max2(s2, s3);
			if (s2 == s3)
			{
				i++; j--;
			}
			if (s == s2) j--;
			else i++;
		}
	}
	return m;
}
int main(void)
{
	int a[9] = { 1,2,3,4,5,25,24,3,4};
	cout << maxArea(a, 9) << endl;
	//cout << maxArea2(a, 9) << endl;
	return 0;
}