#include "StdAfx.h"
#include "bone.h"
#include "stdlib.h"
#include "iostream"
#include "string.h"

using namespace std;

bone::bone(int a, int b) // ����������� ����������� ��� �����, ��� �������� �� ��������.
{
	FILE* pf = NULL;
	this->left = a;
	this->right = b;

	if(right >= left)	// ��� �������� ������ ������ ������ � �������� �������� � ������ ���� :
		Reverse();		// ������ ����� ������ ���� ������ ��� ����� ������� �.�. 1-5 ������ �� ����� ����

	this->owner = MARKET;
	this->pic = NULL;
	this->value = 0;

	pf = fopen("values.txt","r");	

	this->value = (left*10)+right;
	char strval[3] = { 0 };
	sprintf( strval, "%d", value );

	int i = 1;
	char* str = new char[10];

	while(i != 0 || i < 28)// ���� ������ � ����� ������ �� ��������� ��������
	{
		fgets (str, 10, pf);
		if(strstr(str,strval) != 0)
		{
			this->line = i;
			break;
		}
		i++;
	}
	fclose(pf);
	pf = NULL;
	

	i = line;

	this->pic = new char[100];
	if(!this->pic)
	{
		cout << "memory error.\n";
		exit(1);
	}
	pf = fopen("pics.txt","r");
	if(line == 0)			// ���������� ��������� ����� ������ ��� �� ���������� ��� ����� � ������� �����
		fgets (pic, 80, pf);// �������� ��������������� ������ �� ��������.
	for( i; i > 0 ; i-- )
	{
		fgets (pic, 80, pf);
	}
	fclose(pf);
	pf = NULL;
	delete[] str;
	str = NULL;

}

int bone::get_owner(void)
{
	return 0;
}

void bone::set_owner(int a)
{

}

//char* bone::GetStringValue(void)
//{
//	char strval[3] = {0};
//	sprintf( strval, "%d", value );
//	return strval;
//}

void bone::Reverse(void)
{
	int a = left;
	this->left = this->right;
	this->right = a;
}

bone::~bone(void)
{
	delete[] this->pic;
}