#pragma once
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//ͨ������£�����������С�������ڴ�����ֵ��ұߡ���Ҳ����������
//���� 4 ��д�� IIII������ IV������ 1 ������ 5 ����ߣ�����ʾ�������ڴ��� 5 ��С�� 1 �õ�����ֵ 4 ��
//ͬ���أ����� 9 ��ʾΪ IX���������Ĺ���ֻ�������������������
//I ���Է��� V(5) �� X(10) ����ߣ�����ʾ 4 �� 9��
//X ���Է��� L(50) �� C(100) ����ߣ�����ʾ 40 �� 90��
//C ���Է��� D(500) �� M(1000) ����ߣ�����ʾ 400 �� 900��
//����һ���������֣�����ת��������������ȷ���� 1 �� 3999 �ķ�Χ�ڡ�
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