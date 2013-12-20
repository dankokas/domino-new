#include "StdAfx.h"
#include "bone.h"
#include "stdlib.h"
#include "iostream"
#include "string.h"

using namespace std;

bone::bone()// the default constructor 
{
	FILE* pf = NULL;
	this->owner = MARKET;
	this->pic = NULL;
	this->value = 0;

	pf = fopen("values.txt","r");	

	char strval[3] = { 0 };
	//sprintf( strval, "%d", value );

	/*this->left = atoi(strval) % 10;
	this->right = atoi(strval) / 10;*/

	int i = 0;
	char* str = new char[10];
	for( i = 0; i <= count; i++ )
	{
		fgets( strval, 10, pf );
		this->line = i;
		
	}
	fclose( pf );
	pf = NULL;
	this->left = (int)strval[0] - '0';
	this->right = (int)strval[1] - '0';
	this->value = atoi(strval);
	i = line;

	this->pic = new char[100];
	if( !this->pic )
	{
		cout << "memory error.\n";
		exit(1);
	}
	pf = fopen("pics.txt", "r");
	if( line == 0 )		// используем найденный номер строки что бы определить имя файла в котором лежит
		fgets ( pic, 80, pf );// картинка соответствующая числам на костяшке.
	else
	{
		for( int j = 0; j <= i ; j++ )
		{
			fgets (pic, 80, pf);
		}
	}
	fclose(pf);
	pf = NULL;
	delete[] str;
	str = NULL;
	count++;
}

bone::bone( int a, int b ) // конструктор принимающий два числа, два значения на костяшке.
{
	FILE* pf = NULL;
	this->left = a;
	this->right = b;

	if(right >= left)	// для удобства поиска нужных файлов и значений приводим к одному виду :
		Reverse();		// первое число должно быть больше или равно второму т.е. 1-5 такого не может быть

	this->owner = MARKET;
	this->pic = NULL;
	this->value = 0;

	pf = fopen("values.txt","r");	

	this->value = (left*10)+right;
	char strval[3] = { 0 };
	sprintf( strval, "%d", value );

	int i = 1;
	char* str = new char[10];

	while( i != 0 || i < 28 )// цикл поиска в файле строки со значением костяшки
	{
		fgets( str, 10, pf );
		if( strstr( str, strval ) != 0)
		{
			this->line = i;
			break;
		}
		i++;
	}
	fclose( pf );
	pf = NULL;
	

	i = line;

	this->pic = new char[100];
	if( !this->pic )
	{
		cout << "memory error.\n";
		exit(1);
	}
	pf = fopen("pics.txt", "r");
	if( line == 0 )		// используем найденный номер строки что бы определить имя файла в котором лежит
		fgets ( pic, 80, pf );// картинка соответствующая числам на костяшке.
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