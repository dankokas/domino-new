#pragma once
#include "stdio.h"
#define PIC "c:\danil\NIIT\internature\prj\1st_lesson\1st_lesson\pics"
#define VAL "c:\danil\NIIT\internature\prj\1st_lesson\1st_lesson\values"

enum e_owner {MARKET, TABLE, HAND};

ref class bone
{
public:
	bone(int,int);
	~bone(void);
	int get_owner();
	void set_owner(int);
	//char* GetStringValue(void);
	void Reverse(void);
private:
	e_owner owner;
	int value;
	int right, left;
	int line;
	char* pic;
	//вместо нее функ get_string_value
};

