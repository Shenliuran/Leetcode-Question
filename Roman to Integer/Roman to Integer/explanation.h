#pragma once
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，
//例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。
//同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
//I 可以放在 V(5) 和 X(10) 的左边，来表示 4 和 9。
//X 可以放在 L(50) 和 C(100) 的左边，来表示 40 和 90。
//C 可以放在 D(500) 和 M(1000) 的左边，来表示 400 和 900。
//给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。
int tran(char roman)
{
	if (roman == 'I')
		return 1;
	else if (roman == 'V')
		return 5;
	else if (roman == 'X')
		return 10;
	else if (roman == 'L')
		return 50;
	else if (roman == 'C')
		return 100;
	else if (roman == 'D')
		return 500;
	else if (roman == 'M')
		return 1000;
	else
		return 0;
}
int specialTran(char lRoman, char rRoman)
{
	if (lRoman == 'I' && rRoman == 'V')
		return 4;
	else if (lRoman == 'I' && rRoman == 'X')
		return 9;
	else if (lRoman == 'X' && rRoman == 'L')
		return 40;
	else if (lRoman == 'X' && rRoman == 'C')
		return 90;
	else if (lRoman == 'C' && rRoman == 'D')
		return 400;
	else /*if (lRoman == 'C' && rRoman == 'M')*/
		return 900;
}
bool isSpecialCom(char lRoman, char rRoman)
{
	if (lRoman == 'I' && rRoman == 'V')
		return true;
	else if (lRoman == 'I' && rRoman == 'X')
		return true;
	else if (lRoman == 'X' && rRoman == 'L')
		return true;
	else if (lRoman == 'X' && rRoman == 'C')
		return true;
	else if (lRoman == 'C' && rRoman == 'D')
		return true;
	else if (lRoman == 'C' && rRoman == 'M')
		return true;
	else
		return false;
}